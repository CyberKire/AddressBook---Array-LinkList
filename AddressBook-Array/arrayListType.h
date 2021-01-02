#ifndef ARRAYLISTTYPE_H_INCLUDED
#define ARRAYLISTTYPE_H_INCLUDED
#include <iostream>
template<class elemType>
class arrayListType
{
    protected:
        elemType *list;
        int length;
        int maxSize;

    public:
        bool isEmpty();
        bool isFull();
        int listSize();
        int maxListSize();
        void print();
        bool isItemAtEqual(int, const elemType&);
        bool insertAt(int, const elemType&);
        bool insertEnd(const elemType&);
        bool removeAt(int, const elemType&);//
        void retrieveAt(int, elemType&);
        void replaceAt(int, const elemType&);
        void clearList();//
        int seqSearch(const elemType&);
        void insert(const elemType&);
        void remove(const elemType&);
        arrayListType(int size=100);
        arrayListType(const arrayListType<elemType>&);
        ~arrayListType();
        const arrayListType<elemType>& operator=(const arrayListType<elemType>&);

};


#endif // ARRAYLISTTYPE_H_INCLUDED
