#include "Client.h"

void Client::set_BankAccountNum(int account)
{
  bank_account_num = account;
}

void Client::set_ClientName(string name)
{
    name_client = name;
}

void Client::set_SSN(int ssn2)
{
   ssn = ssn2;
}

string Client::get_ClientName()
{
    return name_client;
}

int Client::get_BankAccountNum()
{
    return bank_account_num;
}

int Client::get_SSN()
{
    return ssn;
}

void Client::print_inf()
{
    printf("Bank Account: %i, Name: %s, SNN: %i\n", bank_account_num, name_client.c_str(), ssn); 
}
