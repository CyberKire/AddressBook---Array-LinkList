#ifndef ADDRESSBOOKTYPE_H_INCLUDED
#define ADDRESSBOOKTYPE_H_INCLUDED

#include "arrayListType.h"
#include "extPersonType.h"
using namespace std;

class addressBookType: public arrayListType<extPersonType>
{

    public:
        void print() const;
        void printNameInTheMonth(int month);
        void printInfoOf(string lName);
        void printAt(int i);
        int search(string lName);
        addressBookType(int size);
        ~addressBookType();
};


#endif // ADDRESSBOOKTYPE_H_INCLUDED
