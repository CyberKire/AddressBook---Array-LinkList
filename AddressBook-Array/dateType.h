#ifndef DATETYPE_H_INCLUDED
#define DATETYPE_H_INCLUDED

using namespace std;

class dateType
{
    private:
        int dMonth;
        int dDay;
        int dYear;

    public:
        dateType(int = 1,int =1, int = 1900);
        ~dateType();
        void setDate(int,int,int);
        int getDay();
        int getMonth();
        int getYear();
        void printDate();
        bool isLeapYear();
        //dateType(const dateType&);
};


#endif // DATETYPE_H_INCLUDED
