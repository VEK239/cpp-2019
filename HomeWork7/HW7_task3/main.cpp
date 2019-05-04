#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Date d(1, 2, 2000);
    cout << d << endl;

    Person p("Fillip", "Wallaert", d, true);
    cout << p << endl;
    const Person p2("Eva", "Beyens", Date(21, 8, 1995), false);
    cout << p2 << endl;

    Person* p3 = new Student("Karen", "Vervinnen", Date(13, 5, 1985), false, 1234);
    cout << *p3 << endl;
    return 0;
}
