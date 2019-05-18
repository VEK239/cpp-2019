#include <utility>
#include <ntdef.h>

//
// Created by 1123085 on 14.05.2019.
//

#include "Hydrocarbon.h"

Hydrocarbon::Hydrocarbon(int size)
{
    mChainSize = size;
    mExtraHydroCarbyls.resize(static_cast<unsigned long long int>(size), 0);
}

std::ostream& operator<<(std::ostream& out, const Hydrocarbon& hydrocarbon)
{
    for (int i = 0; i < hydrocarbon.mChainSize; ++i)
    {
        int repeatingHydro = (i == 0 ? 3 : 2) - hydrocarbon.mExtraHydroCarbyls[i];

        if (i == hydrocarbon.mChainSize - 1)
        {
            ++repeatingHydro;
        }
        out << "CH";
        if (repeatingHydro > 1)
        {
            out << repeatingHydro;
        }
        if (hydrocarbon.mExtraHydroCarbyls[i])
        {
            out << "(CH3)";
            if (hydrocarbon.mExtraHydroCarbyls[i] > 1)
            {
                out << hydrocarbon.mExtraHydroCarbyls[i];
            }
        }
    }
    return out;
}

Hydrocarbon::Hydrocarbon(int size, std::vector<int> extraCarbyls)
{
    mChainSize = size;
    mExtraHydroCarbyls = std::move(extraCarbyls);
}

const Hydrocarbon& Hydrocarbon::operator+()
{
    return *this;
}

const Hydrocarbon Hydrocarbon::operator-()
{
    if (mChainSize > 3 && mExtraHydroCarbyls[mChainSize - 2] < 2)
    {
        ++mExtraHydroCarbyls[mChainSize-- - 3];
    }
    return *this;
}

const Hydrocarbon& Hydrocarbon::operator++()
{
    mChainSize++;
    mExtraHydroCarbyls.emplace_back(0);
    return *this;
}

const Hydrocarbon Hydrocarbon::operator++(int)
{
    Hydrocarbon tempHydrocarbon = Hydrocarbon(*this);
    ++(*this);
    return tempHydrocarbon;
}

const Hydrocarbon& Hydrocarbon::operator--()
{
    mChainSize--;
    mExtraHydroCarbyls.pop_back();
    return *this;
}

const Hydrocarbon Hydrocarbon::operator--(int)
{
    Hydrocarbon tempHydrocarbon = Hydrocarbon(*this);
    --(*this);
    return tempHydrocarbon;
}

const Hydrocarbon Hydrocarbon::operator!()
{
    for (int& extraHydroCarbyl : mExtraHydroCarbyls)
    {
        extraHydroCarbyl = 2 - extraHydroCarbyl;
    }
    return *this;
}

const Hydrocarbon Hydrocarbon::operator~()
{
    return !*this;
}

const Hydrocarbon operator+(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    int chainSize = leftCarbyl.mChainSize + rightCarbyl.mChainSize;
    std::vector<int> hydroCarbyls;
    for (int extraCarbylsSize : leftCarbyl.mExtraHydroCarbyls)
    {
        hydroCarbyls.emplace_back(extraCarbylsSize);
    }
    for (int extraCarbylsSize : rightCarbyl.mExtraHydroCarbyls)
    {
        hydroCarbyls.emplace_back(extraCarbylsSize);
    }
    return Hydrocarbon(chainSize, hydroCarbyls);
}

const Hydrocarbon operator-(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    int chainSize = leftCarbyl.mChainSize - rightCarbyl.mChainSize;
    std::vector<int> hydroCarbyls;
    for (int extraCarbylsSize : leftCarbyl.mExtraHydroCarbyls)
    {
        hydroCarbyls.emplace_back(extraCarbylsSize);
    }
    hydroCarbyls.resize(static_cast<unsigned long long int>(chainSize));
    return Hydrocarbon(chainSize, hydroCarbyls);
}

const Hydrocarbon operator*(const Hydrocarbon& carbyl, int poliDegree)
{
    int chainSize = carbyl.mChainSize * poliDegree;
    std::vector<int> hydroCarbyls;
    for (int i = 0; i < poliDegree; ++i)
    {
        for (int extraCarbylsSize : carbyl.mExtraHydroCarbyls)
        {
            hydroCarbyls.emplace_back(extraCarbylsSize);
        }
    }
    return Hydrocarbon(chainSize, hydroCarbyls);
}

const Hydrocarbon operator/(const Hydrocarbon& carbyl, int dePoliDegree)
{
    int chainSize = carbyl.mChainSize / dePoliDegree;
    std::vector<int> hydroCarbyls;
    hydroCarbyls.resize(static_cast<unsigned long long int>(chainSize));
    for (int i = 0; i < chainSize; ++i)
    {
        hydroCarbyls[i] = carbyl.mExtraHydroCarbyls[i];
    }
    return Hydrocarbon(chainSize, hydroCarbyls);
}

Hydrocarbon& Hydrocarbon::operator+=(const Hydrocarbon& rightCarbyl)
{
    mChainSize += rightCarbyl.mChainSize;
    for (int extraCarbylsSize : rightCarbyl.mExtraHydroCarbyls)
    {
        mExtraHydroCarbyls.emplace_back(extraCarbylsSize);
    }
    return *this;
}

Hydrocarbon& Hydrocarbon::operator-=(const Hydrocarbon& rightCarbyl)
{
    mChainSize -= rightCarbyl.mChainSize;
    mExtraHydroCarbyls.resize(static_cast<unsigned long long int>(mChainSize));
    return *this;
}

Hydrocarbon& Hydrocarbon::operator*=(int poliDegree)
{
    mChainSize *= poliDegree;
    for (int i = 1; i < poliDegree; ++i)
    {
        for (int extraCarbylsSize : mExtraHydroCarbyls)
        {
            mExtraHydroCarbyls.emplace_back(extraCarbylsSize);
        }
    }
    return *this;
}

Hydrocarbon& Hydrocarbon::operator/=(int dePoliDegree)
{
    mChainSize /= dePoliDegree;
    mExtraHydroCarbyls.resize(static_cast<unsigned long long int>(mChainSize));
    return *this;
}

const Hydrocarbon operator%(const Hydrocarbon& carbyl, int dePoliDegree)
{
    int chainSize = carbyl.mChainSize % dePoliDegree;
    std::vector<int> hydroCarbyls;
    hydroCarbyls.resize(static_cast<unsigned long long int>(chainSize));
    for (int i = carbyl.mChainSize - chainSize; i < chainSize; ++i)
    {
        hydroCarbyls[i] = carbyl.mExtraHydroCarbyls[i];
    }
    return Hydrocarbon(chainSize, hydroCarbyls);
}

Hydrocarbon& Hydrocarbon::operator%=(int dePoliDegree)
{
    int oldChainSize = mChainSize;
    mChainSize %= dePoliDegree;
    std::vector<int> hydroCarbyls;
    hydroCarbyls.resize(static_cast<unsigned long long int>(mChainSize));
    for (int i = oldChainSize - mChainSize; i < mChainSize; ++i)
    {
        hydroCarbyls[i] = mExtraHydroCarbyls[i];
    }
    mExtraHydroCarbyls = hydroCarbyls;
    return *this;
}

bool operator==(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    if (leftCarbyl.mChainSize == rightCarbyl.mChainSize)
    {
        bool identical = true;
        for (int i = 0; i < leftCarbyl.mExtraHydroCarbyls.size(); ++i)
        {
            identical &= leftCarbyl.mExtraHydroCarbyls[i] == rightCarbyl.mExtraHydroCarbyls[i];
        }
        return identical;
    }
    else
    {
        return false;
    }
}

bool operator!=(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    return !(leftCarbyl == rightCarbyl);
}

bool operator<=(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    return (leftCarbyl < rightCarbyl) || (leftCarbyl == rightCarbyl);
}

bool operator>=(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    return !(leftCarbyl < rightCarbyl);
}

bool operator<(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    if (leftCarbyl.mChainSize < rightCarbyl.mChainSize)
    {
        return true;
    }
    else if (leftCarbyl.mChainSize == rightCarbyl.mChainSize)
    {
        int leftExtraSize = 0;
        int rightExtraSize = 0;
        for (int i = 0; i < leftCarbyl.mExtraHydroCarbyls.size(); ++i)
        {
            leftExtraSize += leftCarbyl.mExtraHydroCarbyls[i];
            rightExtraSize += rightCarbyl.mExtraHydroCarbyls[i];
        }
        return leftExtraSize < rightExtraSize;
    }
    else
    {
        return false;
    }
}

bool operator>(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    return (leftCarbyl >= rightCarbyl) && (leftCarbyl != rightCarbyl);
}

const Hydrocarbon operator&&(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    int chainSize = leftCarbyl.mChainSize < rightCarbyl.mChainSize ? leftCarbyl.mChainSize : rightCarbyl.mChainSize;

    std::vector<int> hydroCarbyls;
    hydroCarbyls.resize(static_cast<unsigned long long int>(chainSize));

    for (int i = 0; i < chainSize; ++i)
    {
        hydroCarbyls[i] = std::min(leftCarbyl.mExtraHydroCarbyls[i], rightCarbyl.mExtraHydroCarbyls[i]);
    }
    return Hydrocarbon(chainSize, hydroCarbyls);
}

const Hydrocarbon operator||(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    Hydrocarbon lessCarbyl = leftCarbyl.mChainSize < rightCarbyl.mChainSize ? leftCarbyl : rightCarbyl;
    Hydrocarbon largerCarbyl = leftCarbyl.mChainSize > rightCarbyl.mChainSize ? leftCarbyl : rightCarbyl;

    std::vector<int> hydroCarbyls;
    hydroCarbyls.resize(largerCarbyl.mExtraHydroCarbyls.size());

    for (int i = 0; i < lessCarbyl.mChainSize; ++i)
    {
        hydroCarbyls[i] = std::max(leftCarbyl.mExtraHydroCarbyls[i], rightCarbyl.mExtraHydroCarbyls[i]);
    }

    for (int i = lessCarbyl.mChainSize; i < largerCarbyl.mExtraHydroCarbyls.size(); ++i)
    {
        hydroCarbyls[i] = largerCarbyl.mExtraHydroCarbyls[i];
    }
    return Hydrocarbon(static_cast<int>(largerCarbyl.mExtraHydroCarbyls.size()), hydroCarbyls);
}

const Hydrocarbon operator&(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    return leftCarbyl && rightCarbyl;
}

const Hydrocarbon operator|(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    return leftCarbyl || rightCarbyl;
}

const Hydrocarbon operator^(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl)
{
    Hydrocarbon lessCarbyl = leftCarbyl.mChainSize < rightCarbyl.mChainSize ? leftCarbyl : rightCarbyl;
    Hydrocarbon largerCarbyl = leftCarbyl.mChainSize > rightCarbyl.mChainSize ? leftCarbyl : rightCarbyl;

    std::vector<int> hydroCarbyls;
    hydroCarbyls.resize(largerCarbyl.mExtraHydroCarbyls.size());

    for (int i = 0; i < lessCarbyl.mChainSize; ++i)
    {
        hydroCarbyls[i] = leftCarbyl.mExtraHydroCarbyls[i] == rightCarbyl.mExtraHydroCarbyls[i] ? 0 : 1;
    }

    for (int i = lessCarbyl.mChainSize; i < largerCarbyl.mExtraHydroCarbyls.size(); ++i)
    {
        hydroCarbyls[i] = 1;
    }
    return Hydrocarbon(static_cast<int>(largerCarbyl.mExtraHydroCarbyls.size()), hydroCarbyls);
}

const Hydrocarbon operator>>(const Hydrocarbon& carbyl, int range)
{
    Hydrocarbon newCarbyl = Hydrocarbon(carbyl);
    for (int i = 0; i < range; ++i)
    {
        int tmp = carbyl.mExtraHydroCarbyls[carbyl.mExtraHydroCarbyls.size() - 1];
        for (int j = static_cast<int>(carbyl.mExtraHydroCarbyls.size() - 1); j > 0; --j)
        {
            newCarbyl.mExtraHydroCarbyls[j] = newCarbyl.mExtraHydroCarbyls[j - 1];
        }
        newCarbyl.mExtraHydroCarbyls[0] = tmp;
    }
    return newCarbyl;
}

const Hydrocarbon operator<<(const Hydrocarbon& carbyl, int range)
{
    Hydrocarbon newCarbyl = Hydrocarbon(carbyl);
    for (int i = 0; i < range; ++i)
    {
        int tmp = carbyl.mExtraHydroCarbyls[0];
        for (int j = 0; j < newCarbyl.mExtraHydroCarbyls.size() - 1; ++j)
        {
            newCarbyl.mExtraHydroCarbyls[j] = newCarbyl.mExtraHydroCarbyls[j + 1];
        }
        newCarbyl.mExtraHydroCarbyls[newCarbyl.mExtraHydroCarbyls.size()] = tmp;
    }
    return newCarbyl;
}

Hydrocarbon& Hydrocarbon::operator&=(const Hydrocarbon& rightCarbyl)
{
    mChainSize = mChainSize < rightCarbyl.mChainSize ? mChainSize : rightCarbyl.mChainSize;
    mExtraHydroCarbyls.resize(static_cast<unsigned long long int>(mChainSize));

    for (int i = 0; i < mChainSize; ++i)
    {
        mExtraHydroCarbyls[i] = std::min(mExtraHydroCarbyls[i], rightCarbyl.mExtraHydroCarbyls[i]);
    }
    return *this;
}

Hydrocarbon& Hydrocarbon::operator|=(const Hydrocarbon& rightCarbyl)
{
    Hydrocarbon lessCarbyl = mChainSize < rightCarbyl.mChainSize ? *this : rightCarbyl;
    Hydrocarbon largerCarbyl = mChainSize > rightCarbyl.mChainSize ? *this : rightCarbyl;

    std::vector<int> hydroCarbyls;
    hydroCarbyls.resize(largerCarbyl.mExtraHydroCarbyls.size());

    for (int i = 0; i < lessCarbyl.mChainSize; ++i)
    {
        hydroCarbyls[i] = std::max(mExtraHydroCarbyls[i], rightCarbyl.mExtraHydroCarbyls[i]);
    }

    for (int i = lessCarbyl.mChainSize; i < largerCarbyl.mExtraHydroCarbyls.size(); ++i)
    {
        hydroCarbyls[i] = largerCarbyl.mExtraHydroCarbyls[i];
    }

    *this = Hydrocarbon(static_cast<int>(largerCarbyl.mExtraHydroCarbyls.size()), hydroCarbyls);
    return *this;
}

Hydrocarbon& Hydrocarbon::operator^=(const Hydrocarbon& rightCarbyl)
{
    Hydrocarbon lessCarbyl = mChainSize < rightCarbyl.mChainSize ? *this : rightCarbyl;
    Hydrocarbon largerCarbyl = mChainSize > rightCarbyl.mChainSize ? *this : rightCarbyl;

    std::vector<int> hydroCarbyls;
    hydroCarbyls.resize(largerCarbyl.mExtraHydroCarbyls.size());

    for (int i = 0; i < lessCarbyl.mChainSize; ++i)
    {
        hydroCarbyls[i] = mExtraHydroCarbyls[i] == rightCarbyl.mExtraHydroCarbyls[i] ? 0 : 1;
    }

    for (int i = lessCarbyl.mChainSize; i < largerCarbyl.mExtraHydroCarbyls.size(); ++i)
    {
        hydroCarbyls[i] = 1;
    }

    *this = Hydrocarbon(static_cast<int>(largerCarbyl.mExtraHydroCarbyls.size()), hydroCarbyls);
    return *this;
}

Hydrocarbon& Hydrocarbon::operator>>=(int range)
{
    for (int i = 0; i < range; ++i)
    {
        int tmp = mExtraHydroCarbyls[mExtraHydroCarbyls.size() - 1];
        for (int j = static_cast<int>(mExtraHydroCarbyls.size() - 1); j > 0; --j)
        {
            mExtraHydroCarbyls[j] = mExtraHydroCarbyls[j - 1];
        }
        mExtraHydroCarbyls[0] = tmp;
    }
    return *this;
}

Hydrocarbon& Hydrocarbon::operator<<=(int range)
{
    for (int i = 0; i < range; ++i)
    {
        int tmp = mExtraHydroCarbyls[0];
        for (int j = 0; j < mExtraHydroCarbyls.size() - 1; ++j)
        {
            mExtraHydroCarbyls[j] = mExtraHydroCarbyls[j + 1];
        }
        mExtraHydroCarbyls[mExtraHydroCarbyls.size()] = tmp;
    }
    return *this;
}

int& Hydrocarbon::operator[](int element)
{
    return mExtraHydroCarbyls[element];
}

Hydrocarbon& Hydrocarbon::operator,(const Hydrocarbon& rightCarbyl)
{
    return (*this += rightCarbyl);
}

Hydrocarbon::operator std::vector<int>() const
{
    return mExtraHydroCarbyls;
}

int Hydrocarbon::operator*() const
{
    return mChainSize;
}


