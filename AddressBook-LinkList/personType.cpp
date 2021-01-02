#include "personType.h"

personType::personType(string firstName, string lastName)
{
    setName(firstName, lastName);
}
personType::~personType()
{

}
void personType::setName(string firstName, string lastName)
{
    this->firstName = firstName;
    this->lastName = lastName;
}
string personType::getFirstName()
{
    return firstName;
}
string personType::getLastName()
{
    return lastName;
}
void personType::print()
{
    cout<<firstName<<" "<<lastName;
}
/*
personType::personType(const personType& obj)
{
    firstName = obj.firstName;
    lastName = obj.lastName;
    cout<<"PersonType copy constructor called"<<endl;
}
*/
