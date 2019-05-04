#include "Date.h"

#ifndef HW7_TASK3_PERSON_H
#define HW7_TASK3_PERSON_H

class Person
{
private:
    std::string name;
    std::string surname;
    Date birthDate;
    bool male;
public:
    Person(std::string name, std::string surname, Date birthDate, bool male);

    std::string getName() const;

    std::string getSurname() const;

    Date getBirthDate() const;

    bool getSex() const;

    virtual std::ostream &getData(std::ostream &out) const;

    void setName(std::string name);

    void setSurname(std::string surname);

    void setBirthDate(Date date);

    void setSex(bool male);

};
std::ostream &operator<<(std::ostream &out, const Person& p);


#endif //HW7_TASK3_PERSON_H
