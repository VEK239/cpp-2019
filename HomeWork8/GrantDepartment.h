//
// Created by 1123085 on 12.05.2019.
//

#ifndef HOMEWORK8_GRANTDEPARTMENT_H
#define HOMEWORK8_GRANTDEPARTMENT_H

#include "Department.h"
#include <vector>

class GrantDepartment: public Department
{
public:
    GrantDepartment(std::vector<Employee*> employees, std::vector<Office> offices);
    GrantDepartment(Employee* employee, Office office);
    std::string printDetails() const override;
    bool checkBudget() const;
    void payMoney(std::string name, int amountPaid, std::string description);
};


#endif //HOMEWORK8_GRANTDEPARTMENT_H
