#include <iostream>
#include "Department.h"
#include "CEO.h"
#include "Director.h"
#include "GrantDepartment.h"
#include "FundRaisingDepartment.h"
#include <vector>

int main()
{
    Employee* employee1 = new CEO("David Brown", "St. Diiii, 52", "123456789o", 12500);
    Employee* employee2 = new Director("Pushkin", "St. Bewm, 2", "125dgh6789o", 10000);
    Employee* employee3 = new Employee("Bim", "St. ASt, 35", "12agfn89o", 8000, "VacuumCleaner");
    Office office("Farrow street, 15", 1234567);
    std::vector<Employee*> employees = {employee1, employee2, employee3};
    std::vector<Office> offices = {office};

    GrantDepartment grantDepartment(employee1, office);
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~\n";
    grantDepartment.payMoney("Grant", 1000, "Some payment");
    std::cout << grantDepartment.printDetails() << "\n\n";

    FundRaisingDepartment fundRaisingDepartment(employees, offices);
    fundRaisingDepartment.awardMoney("fff", 12000, "ssss");
    std::cout << fundRaisingDepartment.printDetails();
}