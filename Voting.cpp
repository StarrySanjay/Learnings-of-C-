#include <iostream>
using namespace std;

int main()
{
    int age;
    char gender;
    cout << " \n Enter your age :";
    cin >> age;
    if (age >= 18)
    {
        cout << "\n Enter your Gender M/F : ";
        cin >> gender;

        if (gender == 'm' || gender == 'M')
        {
            cout << "\n Go to Room No - 5"<<endl;
        }
        else if (gender == 'f' || gender == 'F')
        {
            cout << "\n Go to Room No -6"<<endl;
        }
        else{
            cout<<"\n Invalid Gender Input";
        }
    }
    else
    {
        cout << "you are Not Eligible for Vote !!" << endl;
    }

    
}