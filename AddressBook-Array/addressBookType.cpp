#include "addressBookType.h"
#include "arrayListType.cpp" // Needed or else the constructor will not work!
void addressBookType::print() const
{
    for(int i=0; i<length; i++)
    {
        list[i].print();
        cout<<endl;
    }
}

void addressBookType::printNameInTheMonth(int month)
{
    for(int i=0; i<length; i++)
    {
        if(list[i].getDob().getMonth() == month)
        {
            cout<<list[i].getFirstName()<<endl;
        }
    }
}
addressBookType::addressBookType(int size):arrayListType<extPersonType>(size)
{

}
addressBookType::~addressBookType()
{

}
void addressBookType::printInfoOf(string lName)
{
    for(int i=0; i<length; i++)
    {
        if(list[i].getLastName()==lName)
        {
            list[i].print();
            break;
        }
    }
}
void addressBookType::printAt(int i)
{
    list[i].print();
    cout<<endl;
}
int addressBookType::search(string lName)
{
    for(int loc=0;loc<length;loc++)
    {
        if(list[loc].getLastName()==lName)
            return loc;
    }
    return -1;
}
