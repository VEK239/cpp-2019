//
// Created by 1123085 on 11.05.2019.
//

#ifndef HOMEWORK8_DIRECTOR_H
#define HOMEWORK8_DIRECTOR_H

#include "Employee.h"

class Director: public Employee
{
public:
    Director(std::string name, std::string address, std::string id, int salary);
};


#endif //HOMEWORK8_DIRECTOR_H
