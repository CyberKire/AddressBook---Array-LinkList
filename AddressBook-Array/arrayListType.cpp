#include "arrayListType.h"
#include<assert.h>
using namespace std;

template<class elemType>
bool arrayListType<elemType>::isEmpty()
{
    return (length == 0);
}
template<class elemType>
bool arrayListType<elemType>::isFull()
{
    return (length == maxSize);
}
template<class elemType>
int arrayListType<elemType>::listSize()
{
    return length;
}
template<class elemType>
int arrayListType<elemType>::maxListSize()
{
    return maxSize;
}
template<class elemType>
void arrayListType<elemType>::print()
{
    for(int i=0; i<length;i++)
        cout<<list[i]<<" ";
    cout<<endl;
}
template<class elemType>
bool arrayListType<elemType>::isItemAtEqual(int location,const elemType& obj)
{
    return (list[location]== obj);
}
template<class elemType>
bool arrayListType<elemType>::insertAt(int location, const elemType& insertItem)
{
    if(location<0 || location>=maxSize)
        cerr<<"The position of the item to be inserted is out of range"<<endl;
    else
    {
        if(length>=maxSize)
            cerr<<"Cannot insert in a full list"<<endl;
        else
        {
            for(int i=length; i>location; i--)
                list[i]=list[i-1];

            list[location] = insertItem;
            length++;
        }
    }


}
template<class elemType>
bool arrayListType<elemType>::insertEnd(const elemType& insertItem)
{
    if(length>=maxSize)
        cerr<<"cannot insert in a fill list."<<endl;
    else
    {
        list[length]=insertItem;
        length++;
    }
}
template<class elemType>
bool arrayListType<elemType>::removeAt(int location, const elemType& obj)
{
    if(location<0 || location>=length)
        cerr<<"The location of the item to be removed is out of range."<<endl;
    else
    {
        for(int i=location; i<length;i++)
            list[i]=list[i+1];
        length--;
    }
}
template<class elemType>
void arrayListType<elemType>::retrieveAt(int location, elemType& retItem)
{
    if(location<0 || location>=length)
        cerr<<"The location of the item to be removed is out of range."<<endl;
    else
    {
        retItem = list[location];
    }
}
template<class elemType>
void arrayListType<elemType>::replaceAt(int location, const elemType& obj)
{
    if(location<0 || location>=length)
        cerr<<"The location of the item to be removed is out of range."<<endl;
    else
        list[location] = obj;
}
template<class elemType>
void arrayListType<elemType>::clearList()
{
    length=0;
}
template<class elemType>
int arrayListType<elemType>::seqSearch(const elemType& searchItem)
{
    for(int i =0; i<length; i++)
    {
        if(list[i]==searchItem)
            return i;
    }
    return -1;
}
template<class elemType>
void arrayListType<elemType>::insert(const elemType& insertItem)
{
    int loc;
    if(length==0)
        list[length++]==insertItem;
    else if(length == maxSize)
        cerr<<"Cannot insert in a full list."<<endl;
    else
    {
        loc = seqSearch(insertItem);
        if(loc == -1)
            list[length++]=insertItem;
        else
            cerr<<"The item to be inserted is already in the list. No duplicates allowed."<<endl;
    }
}
template<class elemType>
void arrayListType<elemType>::remove(const elemType& removeItem)
{
    int loc;
    if(length==0)
        cerr<<"cannot delete from an empty list."<<endl;
    else
    {
        loc=seqSearch(removeItem);
        if(loc!=-1)
            removeAt(loc);
        else
            cout<<"The item to be deleted is not in the list"<<endl;

    }
}
template<class elemType>
arrayListType<elemType>::arrayListType(int size)
{
    if(size < 0)
    {
        cerr<<"The array size must be positive. Creating an array of size 100."<<endl;
        maxSize = 100;
    }
    else
        maxSize = size;
    length = 0;
    list = new elemType[maxSize];
    assert(list!=NULL);//making the assumption that the pointer,list, is able to point to a memory address.
                        //If not (pointing to NULL), terminate the program.
}
template<class elemType>
arrayListType<elemType>::arrayListType(const arrayListType<elemType>& obj)
{
    this->length = obj.length;
    this->maxSize = obj.maxSize;
    list = new elemType[maxSize];
    asser(list!=NULL);
    for(int i=0; i<obj.length; i++)
        list[i]=obj.list[i];
}
template<class elemType>
arrayListType<elemType>::~arrayListType()
{
    delete []list;
}
template<class elemType>
const arrayListType<elemType>& arrayListType<elemType>::operator=(const arrayListType<elemType>& other)
{
    if(this != &other)//avoiding self assign
    {
        delete [] list;
        maxSize = other.maxSize;
        length = other.length;
        list = new elemType[maxSize];
        assert(list!=NULL);

        for(int i=0;i<length;i++)
            list[i] = other.list[i];
    }

    return *this;
}
