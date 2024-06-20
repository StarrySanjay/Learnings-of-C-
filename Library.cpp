#include <iostream>
using namespace std;

int main()
{
    float fine;
    int days;
    cout<<"Number of Days : "<<endl;
    cin>>days;
    if(days>0 && days<5){
        cout<<"Your Fine is 50 Paise"<<endl;
    }
    else if (days>=6 && days<=10){
        cout<<"Your Fine is 1 Rupee"<<endl;
    }
    else if(days>10 && days<30){
        cout<<"Your Fine is 5 Rupees"<<endl;

    }
    else{
        cout<<"Your Membership Will be Cancelled"<<endl;
    }

}

