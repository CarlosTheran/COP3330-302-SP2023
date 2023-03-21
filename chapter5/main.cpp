#include <iostream>
#include <string>

/*g++ -std=c++11 main.cpp*/

using namespace std;

struct InvItem
{
    int partNum;
    string description;
    int onhand;
    double price;

    InvItem(){};
    InvItem(int pN, string des, int oh, double p)
    {
        partNum = pN;
        description = des;
        onhand = oh;
        price = p;
    }
};


void getItemData(InvItem & Item)
{
    cout<<"Write the partNum of your Item: "<<endl;
    cin >> Item.partNum;

    cout<<"Write the description of your Item: "<<endl;
    cin >>Item.description;

    cout<<"How many Item are in the store: "<<endl;
    cin >>Item.onhand;

    cout<<"Write the Item price: "<<endl;
    cin >>Item.price;
}

void showItemInformation(const InvItem & Item)
{
  
 cout<<"Values from given Item: "<<endl;
 cout<<"PartNumb: "<< Item.partNum<<endl;
 cout<<"description: "<<Item.description<<endl;
 cout<<"onhand: "<<Item.onhand<<endl;
 cout<<"price: "<<Item.price<<endl;

}


int main()
{

 InvItem Item = {487,"Laptop",6,2789};

 InvItem Item2;
 InvItem Item3(213,"PC",9,2340);

getItemData(Item2);
showItemInformation(Item2);

showItemInformation(Item3);

}
