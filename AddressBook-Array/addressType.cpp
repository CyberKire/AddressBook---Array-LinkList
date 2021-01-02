#include "addressType.h"
#include <iostream>
using namespace std;

addressType::addressType(string streetAddress, string city, string state, int zipCode)
{
    setStreetAddress(streetAddress);
    setCity(city);
    setState(state);
    setZipCode(zipCode);
}
addressType::~addressType()
{

}
void addressType::setStreetAddress(string streetAddress)
{
    this->streetAddress = streetAddress;
}
void addressType::setCity(string city)
{
    this->city = city;
}
void addressType::setState(string state)
{
    this->state = state;
}
void addressType::setZipCode(int zipCode)
{
    this->zipCode = zipCode;
}
string addressType::getStreetAddress()
{
    return streetAddress;
}
string addressType::getCity()
{
    return city;
}
string addressType::getState()
{
    return state;
}
int addressType::getZipCode()
{
    return zipCode;
}
void addressType::addressPrint()
{
    cout<<"Street Address: "<<streetAddress<<endl;
    cout<<"City: "<<city<<endl;
    cout<<"State: "<<state<<endl;
    cout<<"Zip Code: "<<zipCode<<endl;
}
/*
addressType::addressType(const addressType& obj)
{
    streetAddress = obj.streetAddress;
    city = obj.city;
    state = obj.state;
    zipCode = obj.zipCode;
    cout<<"AddressType copy constructor called"<<endl;
}*/
void addressType::addressSetAll(string streetAddress, string city, string state, int zipCode)
{
    setStreetAddress(streetAddress);
    setCity(city);
    setState(state);
    setZipCode(zipCode);
}
