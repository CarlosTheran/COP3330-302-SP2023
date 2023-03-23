#include "BankAccount.h"

BankAccount::BankAccount(int pCurrentBalance,string name_client, int ssn, int account_num)
{
  currentBalance = pCurrentBalance;
  numberOfTransaction = 0;
  client.set_BankAccountNum(account_num);
  client.set_ClientName(name_client);
  client.set_SSN(ssn);
}

BankAccount::BankAccount(int pCurrentBalance)
{
  currentBalance = pCurrentBalance;
  numberOfTransaction = 0;
}

int BankAccount::get_accountNum()
{
  return client.get_BankAccountNum();
}

void BankAccount::set_BankFullInfo(int pCurrentBalance,string name_client, int ssn, int account_num)
{
  currentBalance = pCurrentBalance;
  numberOfTransaction = 0; 

  client.set_BankAccountNum(account_num);
  client.set_SSN(ssn);
  client.set_ClientName(name_client);
}

void BankAccount::deposit(int amount)
{
    currentBalance += amount;
    numberOfTransaction++;
}

void BankAccount::withdraw(int amount)
{
    if(currentBalance >= amount)
    {
        currentBalance -= amount;
    }
    else
    {
        cout<<"ERROR: Cannot withdraw" << amount << "since current balance is "<< currentBalance<<endl;
    }
    numberOfTransaction++;
}

int BankAccount::get_CurrentBalance()
{
    return currentBalance;
} 

int BankAccount::get_NumberOfTransaction()
{
    return numberOfTransaction;
}

void BankAccount::set_CurrentBalance(int amount)
{
  currentBalance = amount;
}

void BankAccount::set_NumberOfTransaction(int amount)
{
    numberOfTransaction = amount;
}

void BankAccount::print_inf()
{
  client.print_inf();  
  printf("Total number of transaction %i, final Balance %i\n",numberOfTransaction,currentBalance);
}
