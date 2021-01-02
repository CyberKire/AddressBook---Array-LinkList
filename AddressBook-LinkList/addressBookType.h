#ifndef ADDRESSBOOKTYPE_H_INCLUDED
#define ADDRESSBOOKTYPE_H_INCLUDED

#include "orderedLinkedList.h"
#include "extPersonType.h"
#include <iostream>
using namespace std;

class addressBookType: public orderedLinkedList<extPersonType>
{
    /*
    private:
        nodeType<extPersonType>* searchList(string fName);
    */

    public:
        void print() const;
        void printNameInTheMonth(int month);
        void printInfoOf(string fName);
        void printNamesWithStatus(string status);
        void insertNode(const extPersonType& person);
        void searchName(string fName);


};

#endif // ADDRESSBOOKTYPE_H_INCLUDED
