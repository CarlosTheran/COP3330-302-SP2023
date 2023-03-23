#include "Client.h"


class BankAccount
{
    private:
       int currentBalance;
       int numberOfTransaction;
       Client client;
    public:
       BankAccount(){};
       ~BankAccount(){}
       BankAccount(int pCurrentBalance);
       BankAccount(int pCurrentBalance,string name_client, int ssn, int account_num);
       int get_CurrentBalance();
       int get_NumberOfTransaction();
       int get_accountNum();
       void bank_information();
       void deposit(int amount);
       void withdraw(int amount);
       void set_CurrentBalance(int amount);
       void set_NumberOfTransaction(int amount);
       void print_inf();
       void set_BankFullInfo(int pCurrentBalance,string name_client, int ssn, int account_num);
};