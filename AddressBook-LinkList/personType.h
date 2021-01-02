#ifndef PERSONTYPE_H_INCLUDED
#define PERSONTYPE_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

class personType
{
    protected:
        string firstName;
        string lastName;

    public:
        personType(string ="", string ="");
        ~personType();
        void setName(string,string);
        string getFirstName();
        string getLastName();
        void print();
        //personType(const personType&);//copy contructor (not needed since we don't work with pointers)


};

#endif // PERSONTYPE_H_INCLUDED
