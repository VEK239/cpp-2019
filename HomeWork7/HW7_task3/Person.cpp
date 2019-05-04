#include <utility>
#include "Date.h"
#include "Person.h"

Person::Person(std::string name, std::string surname, const Date birthDate, bool male) :
        name(move(name)), surname(move(surname)), birthDate(birthDate), male(male)
{}

std::string Person::getName() const
{
    return name;
}

std::string Person::getSurname() const
{
    return surname;
}

Date Person::getBirthDate() const
{
    return birthDate;
}

bool Person::getSex() const
{
    return male;
}

std::ostream &Person::getData(std::ostream &out) const
{
    out << getName() << " " << getSurname() << ": " << (getSex() ? "male" : "female")
        << ", born on " << getBirthDate();
    return out;
}

void Person::setName(std::string name)
{
    this->name = std::move(name);
}

void Person::setSurname(std::string surname)
{
    this->surname = std::move(surname);
}

void Person::setBirthDate(Date date)
{
    this->birthDate = date;
}

void Person::setSex(bool male)
{
    this->male = male;
}

std::ostream& operator<<(std::ostream &out, const Person& p)
{
    return p.getData(out);
}
