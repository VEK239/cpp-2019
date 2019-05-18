//
// Created by 1123085 on 17.05.2019.
//

#ifndef HOMEWORK10_ARRAY_H
#define HOMEWORK10_ARRAY_H

#include <iostream>
#include <cstddef>

template <typename T>
class Array
{
public:
    explicit Array(size_t size = 0, const T& value = T());
    Array();
    Array(const Array& copy);
    ~Array();
    template<typename C>
    Array& operator=(Array<C> const& newArray);
    size_t size() const;
    T* getValue() const;
    T& operator[](size_t index);
    const T& operator[](size_t index) const;
    void print();
    T* mValue;

private:
    void swap(Array<T> &arr);
    size_t mSize;
};



#endif //HOMEWORK10_ARRAY_H
