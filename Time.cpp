#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the Year :" << endl;
    cin >> year;
    if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0)
    {
        cout << year << " Is Leap year"<<endl;
    }
    else
    {
        cout << year << " is Not Leap year"<<endl;
    }
    return 0;
}