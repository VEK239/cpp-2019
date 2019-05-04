#include "Person.h"

#ifndef HW7_TASK3_STUDENT_H
#define HW7_TASK3_STUDENT_H


class Student : public Person
{
private:
    int studentNumber;
public:
    Student(std::string name, std::string surname, Date birthDate, bool male, int studentNumber = 0);

    int getStudentNumber() const;

    void setStudentNumber(int number);

    std::ostream &getData(std::ostream &out) const override;
};


#endif //HW7_TASK3_STUDENT_H
