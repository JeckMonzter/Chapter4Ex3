/*
3. Magic Dates

The date June 10, 1960, is special because when we write it in the following
format, the month times the day equals the year.
        6/10/60
Write a program that asks the user to enter a month(in numeric form), a day,
and a two-digit year. The program should then determine whether the month times
the day is equal to the year. If so, it should display a message saying the date
is magic. Otherwise, it should display a message saying the date is not magic.
Test your program with some dates that are magic and some that are not.

     Input Validation: Think about legal values the program should
     accept for month and day.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int month;
    int year;
    int day;
    int magicDate;

    cout << "Please enter a month in numerical form: ";
    cin >> month;
    cout << "Please enter a dayn numerical form: ";
    cin >> day;
    cout << "Please enter a two-digit year: ";
    cin >> year;

 

    if (cin.fail())
    {
        system("cls");
        cout << "Please enter a valid number." << endl;
    }

    else 
    {
        magicDate = month * day;
        magicDate == year ? cout << "Your date is magic!" : cout << "Your date is not magic.";
    }

    

    return 0;
}