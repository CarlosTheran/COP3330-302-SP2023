#include "ClientTable.h"
#include <iostream>
#include <fstream>

using namespace std;


void ClientTable::set_inf()
{
  ifstream InputFile;
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
    num_clients = index - 1;

}

void ClientTable::print_by_name()
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

int ClientTable::print_by_id()
{
  string given_id;
  bool found = false;
  int index = -1;

  cout<<"Please write the ID of the client ";
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

void ClientTable::print_by_phone()
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

void ClientTable::edit_name()
{
  int position = print_by_id();
  string new_name;
  
  int len = name[position].length();
  cout<<"\nPlease provide the client's name: ";
  cin >> new_name;

  cout<<"Changed name "<<name[position]<<" by "<<new_name<<endl;

  name[position].replace(0,len,new_name);
}

void ClientTable::print_information()
{
  cout<<"The information of the clients: ";
   for(int i=0; i<num_clients; i++)
   {
     printf("\n %s %s %s", id[i].c_str(), name[i].c_str(), phone[i].c_str());
   }
}