#include <iostream>
using namespace std;

int main()
{

    int age;
    char m,g;
    cout<<"Martial status (M/U) : "<<endl;
    cin>>m;
    if(m=='M' || m=='m'){
        cout<<"You are Eligible For Insurance"<<endl;

    }
    else if(m=='U' || m=='u')
    {
        cout<<"Enter your Gender (M/F) :"<<endl;
        cin>>g;
        cout<<"Enter your Age : "<<endl;
        cin>>age;
        if((g=='m' || g=='M') && age>=30){
            cout<<"You are Eligible for Insurance"<<endl;
        }
        else if ((g=='f' || g=='F') && age>=25){
            cout<<"You are Eligible for Insurance"<<endl;
        }
        else{
            cout<<"You are Not Eligible for Insurance"<<endl;
        }
    }
    else{
        cout<<"Invalid Martial Input"<<endl;
    }




    return 0;
}


//problem solved