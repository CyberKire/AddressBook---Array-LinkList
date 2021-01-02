#ifndef ADDRESSTYPE_H_INCLUDED
#define ADDRESSTYPE_H_INCLUDED
#include<string>
using namespace std;
class addressType
{
    private:
        string streetAddress;
        string city;
        string state;
        int zipCode;
    public:
        addressType(string ="", string ="", string ="", int =0);
        ~addressType();
        void setStreetAddress(string);
        void setCity(string);
        void setState(string);
        void setZipCode(int);
        string getStreetAddress();
        string getCity();
        string getState();
        int getZipCode();
        void addressPrint();
        //addressType(const addressType&);
        void addressSetAll(string,string,string,int);
};


#endif // ADDRESSTYPE_H_INCLUDED
