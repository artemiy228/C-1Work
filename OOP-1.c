#include <iostream>
#include <string>

using namespace std;

class Time
{
private:
    int min;
    int hours;

public:
    Time()
    {
        cout << "Time constructor" << endl;
    }
    ~Time()
    {
        cout << "Time destructor" << endl;
    }
};

class Date
{
private:
    int day;
    int month;
    int year;
    Time time;

public:
    // конструкторы 1 - по умолчанию 2 - с параметрами
    Date() : day(1), month(1), year(2000)
    {
        cout << "Date constructor" << endl;
    }
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    ~Date()
    {
        cout << "Date destructor" << endl;
    }
    //metods
    void print()
    {
        cout << day << '.' << month << '.' << year << endl;
    }
    void setDay(int d)
    {
        day = d;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setYear(int y)
    {
        year = y;
    }
    int getDay()
    {
        return day;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }
};

int main()
{
    Date birthday; // если по умолчанию - без скобок, иначе со скобкоми в конце ()
    birthday.print();
}