//
// Created by 1123085 on 11.05.2019.
//

#ifndef HOMEWORK8_SECRETARY_H
#define HOMEWORK8_SECRETARY_H

#include "Employee.h"

class Secretary: public Employee
{
public:
    Secretary(std::string name, std::string address, std::string id, int salary);
};


#endif //HOMEWORK8_SECRETARY_H
