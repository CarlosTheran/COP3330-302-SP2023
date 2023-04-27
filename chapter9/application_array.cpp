#include "Array.h"
#include <iostream>

using namespace std;

Array::Array(){}

Array::Array(const int size, const double values[])
{
    arraySize = size;
    ptr = new double[arraySize];
   
    for(int i=0; i<arraySize; i++)
    {
      ptr[i] = values[i];
    }

}

Array::~Array()
{
    delete[] ptr;
    ptr = nullptr;
}


void Array::print()
{
    for(int i=0; i<arraySize; i++)
    {
       cout<<ptr[i]<<" ";
    }
    cout<<endl;
}

void Array::setValues(double values[])
{
    for(int i=0; i<arraySize; i++)
    {
        ptr[i] = values[i];
    }
}

void Array::set_arraySize(int size)
{
  arraySize = size;
}

Array& Array::operator=(const Array &obj)
{
   if(this != &obj)
   {
     delete[] ptr;
   }

   arraySize = obj.arraySize;
   ptr = new double[arraySize];

   for(int i=0;i<arraySize; i++)
   {
     ptr[i] = obj.ptr[i];
   }

   return *this;
}