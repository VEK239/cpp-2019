#ifndef HW7_TASK1_PLANEFIGURE_H
#define HW7_TASK1_PLANEFIGURE_H

struct PlaneFigure
{
    virtual ~PlaneFigure() = default;

    virtual double getArea() = 0;

    virtual double getPerimeter() = 0;
};


#endif //HW7_TASK1_PLANEFIGURE_H
