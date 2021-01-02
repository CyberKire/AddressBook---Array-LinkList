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
        //personType(const personType&);


};

#endif // PERSONTYPE_H_INCLUDED
