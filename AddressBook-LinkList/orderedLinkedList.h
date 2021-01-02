#ifndef ORDEREDLINKEDLIST_H_INCLUDED
#define ORDEREDLINKEDLIST_H_INCLUDED
#include "linkedListType.h"
#include <iostream>
using namespace std;
template <class Type>
class orderedLinkedList: public linkedListType<Type>
{
    //The 3 lines below help us so we don't have to
    //constantly use "linkedListType<Type>::" or "this->"
    //when using member variables/functions from the template parent class
    /*
    using linkedListType<Type>::first;
    using linkedListType<Type>::last;
    using linkedListType<Type>::count;
    using linkedListType<Type>::length;
    */
    public:
        bool search(const Type& searchItem) const;
        void insert(const Type& newItem);
        void insertFirst(const Type &newItem);
        void insertLast(const Type &newItem);
        void deleteNode(const Type& deleteItem);
};


#endif // ORDEREDLINKEDLIST_H_INCLUDED
