#include "Student.h"

Student::Student(std::string name, std::string surname, const Date birthDate, bool male, int studentNumber) :
        Person(move(name), std::move(surname), birthDate, male), studentNumber(studentNumber)
{}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int number)
{
    studentNumber = number;
}

std::ostream &Student::getData(std::ostream &out) const
{
    out << getName() << " " << getSurname() << ": " << (getSex() ? "male" : "female")
        << ", born on " << getBirthDate() << ", student number: " << getStudentNumber();
    return out;
}
