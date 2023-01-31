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


using namespace std;

void print_by_name(string name[], string id[], string phone[], int num_clients);
void print_by_id(string name[], string id[], string phone[], int num_clients);
void print_by_phone(string name[], string id[], string phone[], int num_clients);

int main()
{
    ifstream InputFile;
    string name[6]={};
    string id[6]={};
    string phone[6]={};
    string client_info;
    int index = 0;

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
    print_by_name( name, id, phone, index);

    InputFile.close();
    cout<<"\nAll clients were loaded..."<<endl;

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

void print_by_id(string name[], string id[], string phone[], int num_clients)
{
  string given_id;
  bool found = false;

  cout<<"Please write the name of the client ";
  cin >> given_id;

  for(int i=0; i< num_clients; i++)
  {
    if(given_id == id[i])
    {
        found = true;
        printf("\nThe information of the client: %s %s %s", id[i].c_str(), name[i].c_str(), phone[i].c_str());
        break;
    }
  }
 if(!found)
 {cout<<"Client not found.."<<endl;}
        
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