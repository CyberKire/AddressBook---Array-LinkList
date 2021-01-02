#ifndef EXTPERSONTYPE_H_INCLUDED
#define EXTPERSONTYPE_H_INCLUDED
#include "dateType.h"
#include "personType.h"
#include "addressType.h"
#include <iostream>

using namespace std;

class extPersonType: public personType
{
    private:
        addressType address;
        dateType dob;
        string association;
        string phoneNumber;


    public:
        //extPersonType(personType,addressType,dateType,string,string);
        extPersonType(string firstName="Erik", string lastName="Sanchez",string streetAddress="3161 Haga Dr",
                      string city="San Jose",string state="CA",int zipCode=95111,
                      int dMonth=8,int dDay=25,int dYear=1991,
                      string association ="friend", string phoneNumber="867-5309");
        ~extPersonType();
        void print();
        void setPersonTypeParam(string firstName,string lastName,addressType address, dateType dob,
                            string association, string phoneNumber);
        dateType getDob() const;
        bool operator ==(const extPersonType& other) const;
        bool operator>=(const extPersonType& other) const;
        string getAssociation();

};


#endif // EXTPERSONTYPE_H_INCLUDED
