//
// Created by 1123085 on 11.05.2019.
//

#ifndef HOMEWORK8_DEPARTMENT_H
#define HOMEWORK8_DEPARTMENT_H

#include "Employee.h"
#include "Office.h"
#include "Budget.h"
#include <vector>

class Department
{
public:
    virtual ~Department();
    Department(Employee* employee, Office office);
    Department(std::vector<Employee*> employees, std::vector<Office> offices);
    virtual std::string printDetails() const;
    void addOffice(Office office);
    void addEmployee(Employee* employee);
    const Budget getBudget() const;
    std::string track() const;
    std::vector<Office> getOfficesVector() const;
    std::vector<Employee*> getEmployeesVector() const;
protected:
    Budget mBudget;
    std::vector<Message*> mMessages;
    std::string mDepartmentName = "Department";
private:
    std::vector<Employee*> mEmployees;
    std::vector<Office> mOffices;
};


#endif //HOMEWORK8_DEPARTMENT_H
