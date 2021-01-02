#include "addressBookType.h"
#include "linkedListType.cpp"//this is needed to use member functions from the parent class, linkedListType
#include "orderedLinkedList.cpp"// need this too! Same reason as above^. Needed for insert node.
void addressBookType::print() const
{
    nodeType<extPersonType> *ptr=first;
    if(isEmptyList())
        cout<<"The list is empty."<<endl;

    else
    {
        while(ptr != NULL)
        {
            ptr->info.print();
            cout<<endl;
            ptr = ptr->link;
        }
    }
}
void addressBookType::printNameInTheMonth(int month)
{
    if(isEmptyList())
        cout<<"The list is empty";
    else
    {
        bool found = false;
        nodeType<extPersonType> *ptr = first;
        while(ptr != NULL)
        {
            if(ptr->info.getDob().getMonth() == month)
            {
                cout<<ptr->info.getFirstName()<<endl;
                found = true;
            }
            ptr = ptr->link;
        }
        if(!found)
            cout<<"No names in that month"<<endl;
    }
}

void addressBookType::printInfoOf(string fName)
{
    if(isEmptyList())
        cout<<"The list is empty."<<endl;
    else
    {
        nodeType<extPersonType> *ptr = first;
        bool found = false;
        while(ptr != NULL && !found)
        {
            if(ptr->info.getFirstName() == fName)
            {
                ptr->info.print();
                found = true;
            }
            else
            {
                ptr = ptr->link;
            }
        }
        if(!found)
            cout<<fName<<" was not found."<<endl;
    }
}
void addressBookType::printNamesWithStatus(string status)
{
    if(isEmptyList())
        cout<<"The list is empty."<<endl;
    else
    {
        bool found = false;
        nodeType<extPersonType> *ptr = first;
        while(ptr != NULL)
        {
            if(ptr->info.getAssociation() == status)
            {
                found = true;
                cout<<ptr->info.getFirstName()<<endl;
                ptr = ptr->link;
            }
            else
                ptr = ptr->link;
        }
        if(!found)
            cout<<"No one on the list with status: "<<status<<endl;
    }
}

void addressBookType::insertNode(const extPersonType& person)
{
    insert(person);
}
void addressBookType::searchName(string fName)
{
    nodeType<extPersonType> *ptr = first;
    bool found = false;
    while(ptr != NULL && !found)
    {
        if(ptr->info.getFirstName() == fName)
        {
            found = true;
            cout<<fName<<" was found."<<endl;
        }
        ptr = ptr->link;
    }
    if(!found)
        cout<<fName<<" was NOT found."<<endl;
}
