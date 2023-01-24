/*
                            Carlos Theran
                                COP3330
        This program finds the roots for quadratic equation ax^2+bx+c=0                   
*/


#include <iostream> //library is use for cout and cin function
#include <math.h> //library is use for mathematical functions
#include <iomanip> //library is use stream manipulator (setw ans setprecision)

using namespace  std;

void general_formula(double a, double b, double c)
{
    double x_sol1 = 0.0, x_sol2 = 0.0;
    double descriminant =0.0;

    descriminant = pow(b,2)-4*a*c;
    if(descriminant>=0)
    {
        x_sol1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
        x_sol2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
        cout<<"\nThe two real solution for the given quadratic equaiton are: "<<endl;
        cout<<left<<"first solution --->"<<setw(4)<<right<<setprecision(4)<<x_sol1<<endl;
        cout<<left<<"second solution --->"<<setw(4)<<right<<setprecision(4)<<x_sol2<<endl;
    }
    else
    {
        cout<<left<<"The given equation does not have real solution, the descriminant value is: "<<descriminant<<endl;
    }
}

int main()
{
    double a = 8, b=1, c=5;   
    

    string answer1 = "yes";
    string answer2 = "yes";


    while(answer1 == answer2)
    {
        cout<<"Please provide the coefficients of your quadratic equation: "<<endl;
        cin >> a >> b >> c;
        
        general_formula(a,b,c);

       cout<<"\nDo you want to keep using the APP? ";
       cin >> ws;
       getline(cin,answer2);
    }



  return 0;  
} 
