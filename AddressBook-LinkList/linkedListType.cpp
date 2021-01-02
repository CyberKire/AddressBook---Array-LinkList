#include "linkedListType.h"
#include <iostream>
#include <assert.h>
template<class Type>
void linkedListType<Type>::copyList(const linkedListType<Type> &otherList)
{
    nodeType<Type> *current;
    nodeType<Type> *newNode;

    cout = otherList.count;

    if(first != NULL)
        destroyList();

    if(otherList.first == NULL)
    {
        count = 0;
        first = NULL;
        last = NULL;
    }
    else
    {
        current = otherList.first;
        count = otherList.count;

        //copy first node
        first = new nodeType<Type>;
        first->info = current->info;
        first->link = NULL;
        last = first;
        current = current->link;

        while(current != NULL)
        {
            newNode = new nodeType<Type>;
            newNode->info = current->info;
            newNode->link = NULL;
            last->link = newNode;
            last = newNode;
            current = current->link;
        }
    }

    /*
    if(otherList.count==0)
        count = 0;
    else
    {
        nodeType<type> *newNode = otherlist;
        newNode = otherList.first;
        for(int i=0; i<otherList.count; i++)
        {
            newNode->info =
        }

    }
    */
}
template<class Type>
void linkedListType<Type>::initializeList()
{
    count=0;
    first = NULL;
    last = NULL;
}
template<class Type>
bool linkedListType<Type>::isEmptyList() const
{
    return (count==0 && first==NULL);
}
template<class Type>
void linkedListType<Type>::printList() const
{
    nodeType<Type> *current;
    if(first==NULL)
        cout<<"The list is empty."<<endl;
    else
    {
        current = first;
        while(current!=NULL)
        {
            cout<<current->info<<endl;
            current = current->link;
        }
    }
}
template<class Type>
int linkedListType<Type>::length() const
{
    return count;
}
template<class Type>
void linkedListType<Type>::destroyList()
{
    /*
    nodeType<Type> *current;
    nodeType<Type> *trailing;

    if(first != NULL)
    {
        current = first;

        while(current != NULL)
        {
            trailing = current;
            current = current->link;
            delete trailing;
        }
    }
    */

    nodeType<Type> *temp;

    while(first != NULL)
    {
        temp = first;
        first = first->link;
        delete temp;
    }
    last = NULL;
    count = 0;
}
template<class Type>
Type linkedListType<Type>::front() const
{
    assert(first != NULL);
    return first->info;
}
template<class Type>
Type linkedListType<Type>::back() const
{
    assert(last != NULL);
    return last->info;
}
template<class Type>
linkedListIterator<Type> linkedListType<Type>::begin()
{
    linkedListType<Type> temp(first);
    return temp;
}
template<class Type>
linkedListIterator<Type> linkedListType<Type>::end()
{
    linkedListType<Type> temp(last);
    return temp;
}
template<class Type>
linkedListType<Type>::linkedListType()
{
    first = NULL;
    last = NULL;
    count = 0;
}
template<class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type> &otherList)
{
    first = NULL;
    copyList(otherList);
}
template<class Type>
linkedListType<Type>::~linkedListType()
{
    destroyList();
}
template<class Type>
const linkedListType<Type>& linkedListType<Type>::operator=(const linkedListType<Type> &other)
{
    if(this!=&other)
    {
        copyList(other);
    }
    return *this;
}
