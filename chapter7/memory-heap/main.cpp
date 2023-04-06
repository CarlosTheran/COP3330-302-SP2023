#include <iostream>
#include "Bed.h"

using namespace std;

int main()
{
  int num_companies;

  cout<<"From how many companies do you want to get a quote? ";
  cin >> num_companies;

  Bed *bed_company = new Bed[num_companies];   

  for(int index=0; index< num_companies; index++)
  {
    cout<<"******** Company "<<index + 1<<endl;
    bed_company[index].set_bed(2);
  }

    for(int index=0; index< num_companies; index++)
  {
    cout<<"******** Company "<<index + 1<<endl;
    bed_company[index].print_info();
  }

  
 
  delete[] bed_company;
  bed_company = nullptr;

}
