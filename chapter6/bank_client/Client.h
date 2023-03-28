//g++ -c bank_client/application_bank.cpp bank_client/application_client.cpp array_of_object.cpp
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <fstream>

using namespace std;


class Client
{
    private:
       string name_client;
       int ssn;
       int bank_account_num;

    public:
    Client(){};
    Client(string name_client, int ssn, int account_num)
    {
      name_client = name_client;
      ssn = ssn;
      bank_account_num = account_num;
    }
    void set_ClientName(string name);
    void set_SSN(int ssn);
    void set_BankAccountNum(int account);
    string get_ClientName();
    int get_SSN();
    int get_BankAccountNum();
    void print_inf();
};