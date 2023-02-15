#include "QuadraticPolinomial.h"
#include <math.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double value1 = 8, value2=1, value3=5;   
    

    string answer1 = "yes";
    string answer2 = "yes";
    double x_values[] = {2,3,4,5,7,8};
    double y_values[6] = {};
    int leng = 6;

    QuadraticPolinomial poly1;
    QuadraticPolinomial poly2(1,3,2);


    while(answer1 == answer2)
    {
        cout<<"Please provide the coefficients of your quadratic equation: "<<endl;
        cin >> value1 >> value2 >> value3;

        poly1.set_a(value1);
        poly1.set_b(value2);
        poly1.set_c(value3);
    
        
        poly1.general_formula();
        poly1.evaluation(x_values, y_values,leng);
       cout<<"\nDo you want to keep using the APP? ";
       cin >> ws;
       getline(cin,answer2);
    }



  return 0;  
} 
