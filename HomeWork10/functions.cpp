//
// Created by 1123085 on 17.05.2019.
//
#include "functions.hpp"

template <class T, class Comp>
T minimum(Array<T> array, Comp comp)
{
    T min = array[0];
    for (int i = 0; i < array.size(); ++i)
    {
        if (comp(array[i], min))
        {
            min = array[i];
        }
    }
    return min;
}

template <class T>
void flatten(const Array<T>& array, std::ostream& out)
{
    for (int i = 0; i < array.size(); ++i)
    {
        out << array[i] << " ";
    }
}

template<class T>
void flatten(const Array<Array<T>>& array, std::ostream& out)
{
    for (int i = 0; i < array.size(); ++i)
    {
        flatten(array[i], out);
    }
}