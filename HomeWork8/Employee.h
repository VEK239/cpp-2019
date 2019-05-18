//
// Created by 1123085 on 11.05.2019.
//
#include <iostream>
#ifndef HOMEWORK8_EMPLOYEE_H
#define HOMEWORK8_EMPLOYEE_H


class Employee
{
public:
    std::string printDetails() const;
    Employee();
    Employee(std::string name, std::string address, std::string id, int salary, std::string jobType);
    void changeSalary(int newSalary);
    void changeAddress(std::string newAddress);
    void changeId(std::string newId);
private:
    std::string mName;
    std::string mAddress;
    std::string mId;
    int mSalary = 0;
    std::string mJobType;
};


#endif //HOMEWORK8_EMPLOYEE_H
