#include "Carpet.h"

void Carpet::set_price_perSqfeet(double p)
{
  price_per_Sqfeet = p;
}

void Carpet::set_dimension(double l, double w)
{
    dimension.set_length(l);
    dimension.set_width(w);
}

Rectangle Carpet::get_dimension()
{
    return dimension;
}

double Carpet::get_price_perSqfeet()
{
    return price_per_Sqfeet;
}

double Carpet::compute_total_price()
{
    return (dimension.area()*price_per_Sqfeet);
}

