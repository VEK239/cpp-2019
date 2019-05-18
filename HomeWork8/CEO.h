//
// Created by 1123085 on 11.05.2019.
//

#ifndef HOMEWORK8_CEO_H
#define HOMEWORK8_CEO_H

#include "Employee.h"

class CEO: public Employee
{
public:
    CEO() = default;
    CEO(std::string name, std::string address, std::string id, int salary);
};


#endif //HOMEWORK8_CEO_H
