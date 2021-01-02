#include <iostream>
#include "extPersonType.h"
#include "addressBookType.h"
#include "orderedLinkedList.cpp"
#include "linkedListType.cpp"
using namespace std;

int main()
{
    extPersonType me;


    extPersonType myFriend("Keanu","Reeves","90210 Hollywood",
                           "Los Angales","CA",95111,9,23,1979,"friend","123-3412");

    extPersonType gf("Angela","Jolie","2432 Rose Dr",
                           "Los Angales","CA",95111,8,23,1979,"girlfriend","308-7989");

    extPersonType boss("Amanda","Nunez","1222 Bee Dr",
                           "Meados","CA",95111,9,23,1979,"friend","222-7679");

    addressBookType myAddressBook;

    myAddressBook.insertFirst(me);
    myAddressBook.insertNode(gf);
    myAddressBook.insertNode(myFriend);
    myAddressBook.insertNode(boss);



    myAddressBook.print();
    cout<<endl<<endl;
    cout<<"People born in August:"<<endl;
    myAddressBook.printNameInTheMonth(8);
    cout<<endl<<endl;
    cout<<"Printing info of Amanda:"<<endl;
    myAddressBook.printInfoOf("Amanda");
    cout<<endl<<endl;
    cout<<"Printing names of friends:"<<endl;
    myAddressBook.printNamesWithStatus("friend");
    cout<<endl<<endl;
    cout<<"Searching:"<<endl;
    myAddressBook.searchName("Angela");
    myAddressBook.searchName("Joe");








    return 0;
}
