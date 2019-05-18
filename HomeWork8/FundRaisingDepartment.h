//
// Created by 1123085 on 12.05.2019.
//

#ifndef HOMEWORK8_FUNDRAISINGDEPARTMENT_H
#define HOMEWORK8_FUNDRAISINGDEPARTMENT_H

#include "Department.h"
#include "Event.h"

class FundRaisingDepartment: public Department
{
public:
    FundRaisingDepartment(Employee* employee, Office office);
    FundRaisingDepartment(std::vector<Employee*> employees, std::vector<Office> offices);
    std::string printDetails() const override;
    void awardMoney(std::string name, int amountAwarded, std::string description);
};


#endif //HOMEWORK8_FUNDRAISINGDEPARTMENT_H
