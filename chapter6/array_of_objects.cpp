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


int main()
{
    string answer;
    string city;
    int expression;
    int bank_account;
    int bank_index;
    int machine_index;



}
