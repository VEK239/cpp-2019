#include "PlaneFigure.h"

#ifndef HW7_TASK1_RECT_H
#define HW7_TASK1_RECT_H

struct Rect : PlaneFigure
{
private:
    double width;
    double height;
public:
    Rect(double w, double h);

    double getArea() override;

    double getPerimeter() override;
};

#endif //HW7_TASK1_RECT_H
