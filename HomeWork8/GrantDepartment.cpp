#include <utility>

#include <utility>

#include <utility>

#include <utility>

//
// Created by 1123085 on 12.05.2019.
//

#include "GrantDepartment.h"
#include "Cause.h"

bool GrantDepartment::checkBudget() const //true if OK
{
    return Department::mBudget.printDetails() > 0;
}

void GrantDepartment::payMoney(std::string name, int amountPaid, std::string description)
{
    Event* event = new Event(std::move(name), amountPaid, std::move(description));
    mMessages.emplace_back(event);
    Department::mBudget.payMoney(event);
}

std::string GrantDepartment::printDetails() const
{
    return Department::printDetails();
}

GrantDepartment::GrantDepartment(Employee* employee, Office office) : Department(employee, std::move(office))
{
    Department::mDepartmentName = "Grant department";
}

GrantDepartment::GrantDepartment(std::vector<Employee*> employees, std::vector<Office> offices) :
Department(std::move(employees), std::move(offices))
{
    Department::mDepartmentName = "Grant department";
}
