/*
                            Carlos Theran
                                COP3330
        This program finds the roots for quadratic equation ax^2+bx+c=0                   
*/


#include <iostream> //library is use for cout and cin function
#include <math.h> //library is use for mathematical functions
#include <iomanip> //library is use stream manipulator (setw ans setprecision)

using namespace  std;

class QuadraticPolinomial
{
   private:
    double a;
    double b;
    double c;
    
   public:
    QuadraticPolinomial(){};
    void general_formula();
    void vertex();
    void evaluation(double x_values[], double y_values[],int leng);
    void set_a(double value);
    void set_b(double value);
    void set_c(double value);
    double get_a();
    double get_b();
    double get_c();
};


void QuadraticPolinomial::general_formula()
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

void QuadraticPolinomial::vertex()
{
   double vertex1 = 0.0;
   double vertex2 = 0.0;

   vertex1 = -b/(2*a);
   vertex2 = a*pow(vertex1,2)+b*vertex1+c;

   printf("\n The vertex are:(%.4f,%.4f)",vertex1,vertex2);
}

void QuadraticPolinomial::evaluation(double x_values[], double y_values[],int leng)
{
   
   for(int i=0;i<leng; i++)
   {
    y_values[i] = a*pow(x_values[i],2)+b*x_values[i]+c;
    cout<<"For x="<<x_values[i]<<"; y="<<y_values[i]<<endl;
   }
}

void QuadraticPolinomial::set_a(double value)
{
    a = value;
}

void QuadraticPolinomial::set_b(double value)
{
    b = value;
}

void QuadraticPolinomial::set_c(double value)
{
    c=value;
}



int main()
{
    double a = 8, b=1, c=5;   
    

    string answer1 = "yes";
    string answer2 = "yes";
    double x_values[] = {2,3,4,5,7,8};
    double y_values[6] = {};
    int leng = 6;
    while(answer1 == answer2)
    {
        cout<<"Please provide the coefficients of your quadratic equation: "<<endl;
        cin >> a >> b >> c;
        
        general_formula(a,b,c);
        evaluation(a, b, c, x_values, y_values,leng);
       cout<<"\nDo you want to keep using the APP? ";
       cin >> ws;
       getline(cin,answer2);
    }



  return 0;  
} 
