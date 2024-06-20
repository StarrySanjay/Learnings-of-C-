#include <iostream>
using namespace std;

int main ()
{
    float bs, hra, da,gs;
    cout<<" \n Enter your Basic salary : ";
    cin>>bs;
    if(bs>1500){
        hra=bs*10/100;
        da=bs*90/100;

    }
    else{
        hra=500;
        da=bs*98/100;

    }
    gs=bs+hra+da;
    cout<<"\n Basic Salary  : "<<bs<<endl;
    cout<<" HRA           : "<<hra<<endl;
    cout<<" DA            : "<<da<<endl;
    cout<<" Gross Salary  : "<<gs<<endl;

return 0;
}