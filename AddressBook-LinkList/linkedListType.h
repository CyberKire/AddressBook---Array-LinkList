#ifndef LINKEDLISTTYPE_H_INCLUDED
#define LINKEDLISTTYPE_H_INCLUDED
#include "nodeType.h"
#include "linkedListIterator.h"
#include "extPersonType.h"
using namespace std;
template <class Type>
class linkedListType
{
    protected:
        int count;
        nodeType<Type> *first;
        nodeType<Type> *last;

    private:
        void copyList(const linkedListType<Type> &otherList);

    public:
        const linkedListType<Type>& operator=(const linkedListType<Type>&);
        void initializeList();
        bool isEmptyList() const;
        void printList() const;
        int length() const;
        void destroyList();
        Type front() const;
        Type back() const;
        virtual bool search(const Type& searchItem) const = 0;
        virtual void insertFirst(const Type& newItem) = 0;
        virtual void insertLast(const Type& newItem) = 0;
        virtual void deleteNode(const Type& deleteItem) = 0;
        linkedListIterator<Type> begin();
        linkedListIterator<Type> end();
        linkedListType();//default constructor
        linkedListType(const linkedListType<Type>& otherList);//copy constructor
        ~linkedListType();

};


#endif // LINKEDLISTTYPE_H_INCLUDED
