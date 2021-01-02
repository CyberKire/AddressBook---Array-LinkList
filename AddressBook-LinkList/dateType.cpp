#include "dateType.h"
#include <iostream>

dateType::dateType(int dMonth, int dDay, int dYear)
{
    setDate(dMonth,dDay,dYear);
}
dateType::~dateType()
{

}
void dateType::setDate(int dMonth, int dDay, int dYear)
{
    if(dMonth>12 || dMonth<1)
        this->dMonth = 1;
    else
        this->dMonth = dMonth;
    if(dDay<0 || dDay>30)
        this->dDay = 1;
    else
        this->dDay = dDay;
    if(dYear<1)
        this->dYear = 1;
    else
        this->dYear = dYear;
}
int dateType::getDay()
{
    return dDay;
}
int dateType::getMonth()
{
    return dMonth;
}
int dateType::getYear()
{
    return dYear;
}
void dateType::printDate()
{
    cout<<dMonth<<"-"<<dDay<<"-"<<dYear;
}
bool dateType::isLeapYear()
{
    if(dYear%4 == 0 && (dYear%100 != 0 || dYear%400 == 0))
        return true;
    else
        return false;
}
/*dateType::dateType(const dateType& obj)
{
    dMonth = obj.dMonth;
    dDay = obj.dDay;
    dYear = obj.dYear;
    cout<<"DateType copy constructor called"<<endl;
}*/
