#include "Carpet.h"
#include <iostream>

using namespace std;


int main()
{
    Carpet carpet1;
    double pricePerFeet = 3.0;
    double length = 34;
    double width = 41;

    carpet1.set_dimension(length, width);
    carpet1.set_price_perSqfeet(pricePerFeet);

    cout<<"\n Total carpet's price: "<< carpet1.compute_total_price() <<endl;
}
