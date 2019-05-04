#include "Rect.h"

Rect::Rect(double w, double h)
{
    width = w;
    height = h;
}

double Rect::getArea()
{
    return width * height;
}

double Rect::getPerimeter()
{
    return 2 * (width + height);
}