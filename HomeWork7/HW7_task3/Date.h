#include <iostream>

#ifndef HW7_TASK3_DATE_H
#define HW7_TASK3_DATE_H

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);

    //friend std::ostream &operator<<(std::ostream &out, const Date &date);

    int getDay() const;

    int getMonth() const;

    int getYear() const;

    void setDay(int day);

    void setMonth(int month);

    void setYear(int year);
};

std::ostream &operator<<(std::ostream &out, const Date& date);

#endif //HW7_TASK3_DATE_H
