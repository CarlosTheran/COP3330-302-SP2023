/*
                                            Carlos Theran
                                            COP 3330 - OOP
                                    This program reads a txt file

*/

#include <iostream>
#include <stdio.h> // For printf function
#include <fstream> // this library allow us to read txt files.
#include <cstdlib> // For ceer, identify if s file exits.
#include <string>
#include <iomanip> //setw() function

using namespace std;

void print_by_name(string name[], string id[], string phone[], int num_clients);
int print_by_id(string name[], string id[], string phone[], int num_clients);
void print_by_phone(string name[], string id[], string phone[], int num_clients);

int main()
{
    ifstream InputFile;
    string name[6]={};
    string id[6]={};
    string phone[6]={};
    string client_info;
    int index = 0;
    int expression = 0;

    InputFile.open("agenda_phone.txt");

    if(!InputFile)
    {
        cerr<<"Error: file could not be opened"<<endl; // file couldn't be opened
        exit(1);
    }


    while(!InputFile.eof())  //eof() is a function from your ifstream class; It allows to identify is the line is empty or not.
    {
        InputFile >> id[index];
        InputFile >> name[index];
        InputFile >> phone[index];

        printf("Client info: %s %s %s\n", id[index].c_str(), name[index].c_str(), phone[index].c_str());
        
        index = index + 1;
    }
    index = index - 1;

    InputFile.close();
    cout<<"\nAll clients were loaded..."<<endl;

    cout<<"\n\n*********************************"<<endl;
    cout<<"***"<<setw(15)<<"MENU"<<setw(15)<<"***"<<endl;
    cout<<left<<setw(15)<<"1. Search by name"<<setw(15)<<endl;
    cout<<left<<setw(15)<<"2. Search by id"<<setw(15)<<endl;
    cout<<left<<setw(15)<<"3. Search by phone"<<setw(15)<<endl;
    cout<<"********************************"<<endl;
    cout<<"Your option: ";
    cin >> expression;

    switch (expression)
    {
    case 1:
      print_by_name(name, id, phone, index);
      break;
    case 2:
      print_by_id(name, id, phone, index);
    case 3:
      print_by_phone(name, id, phone, index);
      break;
    default:
      cout<<"Invalid option."<<endl;
      break;
    }

    return 0;

}

void print_by_name(string name[], string id[], string phone[], int num_clients)
{
  string given_name;
  bool found = false;

  cout<<"Please write the name of the client ";
  cin >> given_name;

  for(int i=0; i< num_clients; i++)
  {
    if(given_name == name[i])
    {
        found = true;
        printf("\nThe information of the client: %s %s %s", id[i].c_str(), name[i].c_str(), phone[i].c_str());
        break;
    }
  }
 if(!found)
 {cout<<"Client not found.."<<endl;}
        
}

int print_by_id(string name[], string id[], string phone[], int num_clients)
{
  string given_id;
  bool found = false;
  int index = -1;

  cout<<"Please write the name of the client ";
  cin >> given_id;

  for(int i=0; i< num_clients; i++)
  {
    if(given_id == id[i])
    {
        found = true;
        index = i;
        printf("\nThe information of the client: %s %s %s", id[i].c_str(), name[i].c_str(), phone[i].c_str());
        break;
    }
  }
 if(!found)
 {cout<<"Client not found.."<<endl;}

 return index; 
}

void print_by_phone(string name[], string id[], string phone[], int num_clients)
{
  string given_phone;
  bool found = false;

  cout<<"Please write the name of the client ";
  cin >> given_phone;

  for(int i=0; i< num_clients; i++)
  {
    if(given_phone == phone[i])
    {
        found = true;
        printf("\nThe information of the client: %s %s %s", id[i].c_str(), name[i].c_str(), phone[i].c_str());
        break;
    }
  }
 if(!found)
 {cout<<"Client not found.."<<endl;}
        
}

void edit_name(string name[], string id[], string phone[], int num_client)
{
  int position = print_by_id(name, id, phone, num_client);
}