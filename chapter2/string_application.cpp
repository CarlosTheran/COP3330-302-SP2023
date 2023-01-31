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

        printf("Client info: %s %s %s\n", );
        

        index = index + 1;
    }

    InputFile.close();
    cout<<"All clients were loaded..."<<endl;

    return 0;

}

