//
// Created by 1123085 on 17.05.2019.
//

#include "Array.hpp"

template<typename T>
Array<T>::Array(size_t size, const T& value)
{
    mSize = size;
    mValue = (T*) operator new(size * sizeof(T));
    for (int i = 0; i < mSize; ++i)
    {
        new (mValue + i) T(value);
    }
}

template<typename T>
Array<T>::Array()
{
    mSize = 0;
    mValue = (T*) operator new(0);
}

template<typename T>
Array<T>::Array(const Array& copy)
{
    mSize = copy.mSize;
    mValue  = (T*) operator new(mSize * sizeof(T));
    for (int i = 0; i < mSize; ++i)
    {
        new (mValue + i) T(copy.mValue[i]);
    }
}

template<typename T>
Array<T>::~Array()
{
    for (int i = 0; i < mSize; ++i)
    {
        mValue[i].~T();
    }
    operator delete(mValue);
}

template<typename T>
template<typename C>
Array<T>& Array<T>::operator=(const Array<C>& newArray)
{
    if (this != &newArray)
    {
        Array<T> temp(newArray);
        temp.swap(*this);
    }
    return *this;
}

template<typename T>
size_t Array<T>::size() const
{
    return mSize;
}

template<typename T>
T &Array<T>::operator[](size_t index)
{
    return *(mValue + index);
}

template<typename T>
const T &Array<T>::operator[](size_t index) const
{
    return *(mValue + index);
}

template<typename T>
void Array<T>::print()
{
    for (size_t i = 0; i < mSize; ++i)
    {
        std::cout << *(mValue + i);
    }
    std::cout << std::endl;
}

template<typename T>
void Array<T>::swap(Array<T>& arr)
{
    std::swap(mSize, arr.mSize);
    std::swap(mValue, arr.mValue);
}

template<typename T>
T* Array<T>::getValue() const
{
    return mValue;
}

