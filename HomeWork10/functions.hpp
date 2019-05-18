//
// Created by 1123085 on 17.05.2019.
//

#ifndef HOMEWORK10_FUNCTIONS_H
#define HOMEWORK10_FUNCTIONS_H

#include "Array.hpp"
#include "Array.cpp"

template <class T, class Comp>
T minimum(Array<T> array, Comp comp);

template <class T>
void flatten(const Array<T>& array, std::ostream& out);

template<class T>
void flatten(const Array<Array<T>>& array, std::ostream& out);

#endif //HOMEWORK10_FUNCTIONS_H
