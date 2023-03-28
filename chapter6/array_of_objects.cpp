#include <iostream>
#include <iomanip>
#include "bank_client/BankAccount.h"

const int NUM_MACHINE = 3;
const int NUM_ACCOUNT = 3;


using namespace std;

struct Machine
{
    string machine_id;
    string location;

    Machine(string id, string loc)
    {
        location = loc;
        machine_id = id;
    }
};


int index_bankAccount(int num_account, BankAccount bank[])
{
   int index = -1;

   for(int i=0; i<NUM_ACCOUNT; i++)
   {
      if(num_account == bank[i].get_accountNum())
      {
        index = i;
        break;
      }
   }

   if(index == -1)
   {
    cout<<"Account Number does not extis.";
   }

   return index;
}

int index_machine(string city, Machine M[])
{
   int index = -1;

   for(int i=0; i<NUM_ACCOUNT; i++)
   {
      if(city == M[i].location)
      {
        index = i;
        break;
      }
   }

   if(index == -1)
   {
    cout<<"Account Number does not extis.";
   }

   return index;
}

void print_info(BankAccount B[], Machine M[], int index_B, int index_M)
{
  cout<<"Transaction information: "<<endl;
  B[index_B].print_inf();
  cout<<"\n Machine ID:"<<M[index_M].machine_id.c_str();
  cout<<"\n Machine location:"<<M[index_M].machine_id.c_str();
}

int main()
{
    string answer;
    string city;
    int expression;
    int num_account;
    int bank_index;
    int machine_index;
    int amount;

    Machine machines[NUM_MACHINE] = { Machine("230-09-87", "Tallahassee"), Machine("174-89-65","Orlando"),
                                      Machine("541-67-09","Gainesville")};

    BankAccount b_account[NUM_MACHINE];
    b_account[0].set_BankFullInfo(5456,"Michael-Suarez",3472,76321);
    b_account[1].set_BankFullInfo(450,"Carlos-Theran",7654,98761);
    b_account[2].set_BankFullInfo(1230,"Rony-McKloain",7654,98761);

    cout<<"Do you want to do any transaction? ";
    cin >> answer;


    if(answer == "yes")
    {
        cout<<"\nSelect the city were you are doing the transaction: ";
        cin >> city;

        cout<<"\nType your bank account number: ";
        cin >> num_account;

        bank_index = index_bankAccount(num_account, b_account);
        machine_index = index_machine(city,machines);
    }


    while (answer == "yes")
    {
     cout<<"\nSelect one of the following option"<<endl;
     cout<<"*************************************"<<endl;
     cout<<"****"<<setw(19)<<" Menu "<<setw(19)<<endl;
     cout<<left<<"1. "<<setw(5)<<"Deposit"<<endl;
     cout<<left<<"2. "<<setw(5)<<"Withdraw"<<endl;
     cout<<"*************************************"<<endl;

     cin >> expression;

     switch (expression)
     {
     case  1:
        cout<<"Write the amount to deposit: $";
        cin >> amount;
        b_account[bank_index].deposit(amount);
        break;
     case 2:
       cout<<"Write the amount to withdraw: $";
       cin >> amount;
        b_account[bank_index].withdraw(amount); 
     default:
        cout<<"The selected option is not valid.";
        break;
     }

     cout<<"Do you want to do any other transaction? ";
     cin >> answer;

    }
    print_info(b_account, machines, bank_index, machine_index);
}
