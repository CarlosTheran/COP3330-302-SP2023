#include "Rectangle.h"

void Rectangle::set_length(double l)
{
    length = l;
}

void Rectangle::set_width(double w)
{
    width = w;
}


double Rectangle::get_length()
{
    return length;
}

double Rectangle::get_width()
{
    return width;
}

double Rectangle::area()
{
    return length*width;
}

double Rectangle::perimeter()
{
    return (2*length)+(2*width);
}