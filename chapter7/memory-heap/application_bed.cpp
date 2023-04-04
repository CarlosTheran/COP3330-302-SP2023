#include <iostream>
#include "Bed.h"

using namespace std;


Bed::Bed(int size)
{
    num_bed = size;
    length = new int[num_bed];
    width = new int[num_bed];

    for(int index=0; index< num_bed; index++)
    {
       cout<<"\nWrite the size (length and width) of your bed "<< index+1<<": ";
       cin >> length[index] >> width[index];
    }
}


void Bed::print_info()
{
    for(int index=0;index<num_bed;index++)
    {
        cout<<"Size bed#"<< index+1 <<":"<<length[index]<<", "<<width[index]<<endl;
    }
}

void Bed::price()
{
    for(int index=0;index<num_bed;index++)
    {
      cout<<"Price Bed#"<<index+1<<": $"<<(length[index]*width[index]*2.5)<<endl;
    }
}

void Bed::set_bed(int size)
{
    num_bed = size;
    length = new int[num_bed];
    width = new int[num_bed];

    for(int index=0; index< num_bed; index++)
    {
       cout<<"\nWrite the size (length and width) of your bed "<< index+1<<": ";
       cin >> length[index] >> width[index];
    }
}


