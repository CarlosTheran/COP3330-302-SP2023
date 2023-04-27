#include "Array.h"
#include <iostream>


using namespace std;


int main()
{
    double values[] = {4,6,8,12,10};
    int size = 5;

    Array obj2(size, values);
    Array obj1;

    obj1 = obj2;

    cout<<"Printing Object1"<<endl;
    obj1.print();

    cout<<"Printing Object2"<<endl;
    obj2.print();

    double new_values[] = {14,36,28,42,90};
    obj1.setValues(new_values);

    cout<<"Printing Object1"<<endl;
    obj1.print();

    cout<<"Printing Object2"<<endl;
    obj2.print();

}