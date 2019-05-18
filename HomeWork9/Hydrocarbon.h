//
// Created by 1123085 on 14.05.2019.
//

#ifndef HOMEWORK9_HYDROCARBON_H
#define HOMEWORK9_HYDROCARBON_H

#include <vector>
#include <iostream>

class Hydrocarbon
{
public:

    explicit Hydrocarbon(int size);

    Hydrocarbon(int size, std::vector<int> extraCarbyls);

    friend std::ostream& operator<<(std::ostream& out, const Hydrocarbon& hydrocarbon);

    const Hydrocarbon& operator+();

    const Hydrocarbon operator-();

    const Hydrocarbon operator!();

    const Hydrocarbon operator~();

    const Hydrocarbon& operator++();

    const Hydrocarbon operator++(int);

    const Hydrocarbon& operator--();

    const Hydrocarbon operator--(int);

    friend const Hydrocarbon operator+(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend const Hydrocarbon operator-(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend const Hydrocarbon operator*(const Hydrocarbon& carbyl, int poliDegree);

    friend const Hydrocarbon operator/(const Hydrocarbon& carbyl, int dePoliDegree);

    friend const Hydrocarbon operator%(const Hydrocarbon& carbyl, int dePoliDegree);

    Hydrocarbon& operator+=(const Hydrocarbon& rightCarbyl);

    Hydrocarbon& operator-=(const Hydrocarbon& rightCarbyl);

    Hydrocarbon& operator*=(int poliDegree);

    Hydrocarbon& operator/=(int dePoliDegree);

    Hydrocarbon& operator%=(int dePoliDegree);

    friend bool operator==(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend bool operator!=(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend bool operator<=(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend bool operator>=(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend bool operator<(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend bool operator>(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend const Hydrocarbon operator&(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend const Hydrocarbon operator&&(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    Hydrocarbon& operator&=(const Hydrocarbon& rightCarbyl);

    friend const Hydrocarbon operator|(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    friend const Hydrocarbon operator||(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    Hydrocarbon& operator|=(const Hydrocarbon& rightCarbyl);

    friend const Hydrocarbon operator^(const Hydrocarbon& leftCarbyl, const Hydrocarbon& rightCarbyl);

    Hydrocarbon& operator^=(const Hydrocarbon& rightCarbyl);

    friend const Hydrocarbon operator>>(const Hydrocarbon& carbyl, int range);

    friend const Hydrocarbon operator<<(const Hydrocarbon& carbyl, int range);

    Hydrocarbon& operator>>=(int range);

    Hydrocarbon& operator<<=(int range);

    int& operator[](int element);

    explicit operator std::vector<int>() const;

    Hydrocarbon& operator,(const Hydrocarbon& rightCarbyl);

    int operator*() const;


private:
    int mChainSize;
    std::vector<int> mExtraHydroCarbyls;
};


#endif //HOMEWORK9_HYDROCARBON_H
