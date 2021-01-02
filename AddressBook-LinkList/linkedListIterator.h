#ifndef LINKEDLISTITERATOR_H_INCLUDED
#define LINKEDLISTITERATOR_H_INCLUDED
#include "nodeType.h"
using namespace std;
template <class Type>
class linkedListIterator
{
    private:
        nodeType<Type> *current;

    public:
        linkedListIterator();//default contructor
        linkedListIterator(nodeType<Type> *ptr);//constructor with parameter
        Type operator*();//Function to overload the dereferencing operator (returning the infor in the node)
        linkedListIterator<Type> operator++();//overloading the preincrement operator
        bool operator==(const linkedListIterator<Type> &right) const;
        bool operator!=(const linkedListIterator<Type> &right) const;

};


#endif // LINKEDLISTITERATOR_H_INCLUDED
