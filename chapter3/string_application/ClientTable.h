#include <string>

using namespace std;


class ClientTable
{ 
    private:
    string name[6];
    string id[6];
    string phone[6];
    int num_clients;

    public:
    ClientTable(){};
    void set_inf();  
    void print_by_name();
    int print_by_id();
    void print_by_phone();
    void edit_name();
    void print_information(); 
};