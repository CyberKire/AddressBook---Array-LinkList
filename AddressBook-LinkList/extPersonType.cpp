#include "extPersonType.h"

extPersonType::extPersonType(string firstName, string lastName,string streetAddress,
                      string city,string state,int zipCode,
                      int dMonth,int dDay,int dYear,
                      string association, string phoneNumber):personType(firstName,lastName),dob(dMonth,dDay,dYear)
{
   address.addressSetAll(streetAddress,city, state, zipCode);
   //dob.setDate(dMonth,dDay,dYear);
   this->association = association;
   this->phoneNumber = phoneNumber;
}
extPersonType::~extPersonType()
{

}
void extPersonType::print()
{
    cout<<"Name: ";
    personType::print();
    cout<<endl;
    address.addressPrint();
    cout<<"Birthday:";
    dob.printDate();
    cout<<endl;
    cout<<"Relation: "<<association<<endl;
    cout<<"Phone Number: "<<phoneNumber<<endl;
}
void extPersonType::setPersonTypeParam(string firstName,string lastName,addressType address, dateType dob,
                            string association, string phoneNumber)
{

    setName(firstName,lastName);

    this->address = address;
    this->dob = dob;
    cout<<"Test"<<endl;
    this->association = association;
    this->phoneNumber = phoneNumber;

}
dateType extPersonType::getDob() const
{
    return dob;
}
bool extPersonType::operator ==(const extPersonType& other) const
{
    return (firstName == other.firstName);
}
string extPersonType::getAssociation()
{
    return association;
}
bool extPersonType::operator >=(const extPersonType& other) const
{
    return (firstName >= other.firstName);
}
