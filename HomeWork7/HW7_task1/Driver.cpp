#include <iostream>
#include "Driver.h"


void Driver::test(PlaneFigure* pf)
{
    std::cout << pf->getArea() << "\n" << pf->getPerimeter();
}

void Driver::main()
{
    PlaneFigure* pf = new Rect(2, 3);
    test(pf);
    delete pf;
}
