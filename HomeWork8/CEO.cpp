#include <utility>

#include <utility>

#include <utility>

//
// Created by 1123085 on 11.05.2019.
//

#include "CEO.h"

CEO::CEO(std::string name, std::string address, std::string id, int salary) :
    Employee::Employee(std::move(name), std::move(address), std::move(id), salary, "CEO") {};
