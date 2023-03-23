#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    const int NUM_MONTH = 6;

    string month_name[NUM_MONTH] = {"January","February","May","April","June","July"};
    int day[NUM_MONTH]= {15,28,10,22,17,20};

    // for(int i=0; i < NUM_MONTH; i++)
    // {
    //     cout<<setw(9)<<left<<month_name[i]<<" - "<<day[i]<<endl;
    // }

    string month_day[6][2]= {{"January","15"},{"February","28"},
                             {"May","10"},{"April","22"},{"June","17"},{"July","20"}};
    

//    for(int i=0; i< NUM_MONTH; i++)
//    {
//         for(int j=0; j< 2; j++)
//         {
//           cout<<setw(9)<<left<<" "<<month_day[i][j];
//         }
//         cout<<endl;
//    } 

      for(int i=0; i< NUM_MONTH; i++)
   {
        for(int j=1; j >= 0; j--)
        {
          cout<<setw(9)<<left<<" "<<month_day[i][j];
        }
        cout<<endl;
   } 

}

