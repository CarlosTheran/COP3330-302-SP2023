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
    string name;
    string id;
    string phone;
    string client_info;

    InputFile.open("agenda_phone.txt");

    if(!InputFile)
    {
        cerr<<"Error: file could not be opened"<<endl; // file couldn't be opened
        exit(1);
    }

    getline(InputFile,client_info);

    while(!InputFile.eof())  //eof() is a function from your ifstream class; It allows to identify is the line is empty or not.
    {
        printf("Client info: %s\n", client_info.c_str());
        getline(InputFile,client_info);
    }

    InputFile.close();
    cout<<"All clients were loaded..."<<endl;

    return 0;

}

