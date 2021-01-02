#include <iostream>
#include "addressType.h"
#include "personType.h"
#include "dateType.h"
#include "extPersonType.h"
#include "addressBookType.h"
#include "arrayListType.cpp"
using namespace std;

int main()
{
    /*
    addressType myAddress("90210 Haga Dr", "Hollywood", "CA", 95111);
    myAddress.addressPrint();

    personType myPerson("Keanu", "Reeves");
    myPerson.print();
    cout<<endl;
    dateType myBirthday(8,25,1971);
    myBirthday.printDate();
    cout<<"//////////////////////////////////////////"<<endl;
    extPersonType me;

    me.print();
    cout<<endl<<endl<<endl;


    extPersonType myFriend;
    myFriend.setPersonTypeParam(myPerson.getFirstName(), myPerson.getLastName(),myAddress,myBirthday,"Friend","911");
    cout<<"Marker-------------------------------------------------->"<<endl;
    myFriend.print();


    //practice "=" and copy constructor
    //I removed the copy constructors and the variables for the exPersonType class are still passing successfully
    //I believe that the copy constructor and = operators are only needed for class pointers or if any custom modifications are needed when working with these operations.
    cout<<"*******************************"<<endl;
    me = myFriend;
    me.print();
    cout<<"Testing!"<<endl;
    extPersonType x=myFriend;
    x.print();

    personType coolPerson = myPerson;
    coolPerson.print();
    */
    addressBookType myBook(5);
    extPersonType me;
    extPersonType myFriend("Keanu","Reeves","90210 Beverly Hills","Hollywood","CA",9012, 1,2,1234,"friend","567-2312");

    myBook.insert(me);
    myBook.insert(myFriend);

    myBook.printNameInTheMonth(8);

    myBook.print();
    return 0;
}
