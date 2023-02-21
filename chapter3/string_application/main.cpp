#include "ClientTable.h"
#include <iostream>
#include <iomanip>


using namespace  std;


int main()
{
    int expression = -1;

    ClientTable client;

    client.set_inf();
    cout<<"\nAll clients were loaded..."<<endl;
    cout<<"\n\n*********************************"<<endl;
    cout<<"***"<<setw(15)<<"MENU"<<setw(15)<<"***"<<endl;
    cout<<left<<setw(15)<<"1. Search by name"<<setw(15)<<endl;
    cout<<left<<setw(15)<<"2. Search by id"<<setw(15)<<endl;
    cout<<left<<setw(15)<<"3. Search by phone"<<setw(15)<<endl;
    cout<<left<<setw(15)<<"4. Edit name"<<setw(15)<<endl;
    cout<<"********************************"<<endl;
    cout<<"Your option: ";
    cin >> expression;

    switch (expression)
    {
    case 1:
      client.print_by_name();
      break;
    case 2:
      client.print_by_id();
    case 3:
      client.print_by_phone();
      break;
    case 4:
      client.edit_name();  
      break;
    default:
      cout<<"Invalid option."<<endl;
      break;
    }
    cout<<endl;
    client.print_information();
    return 0;


}
