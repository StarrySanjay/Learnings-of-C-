#include <iostream>
using namespace std;

int main()
{
    int a[100],i,n,sum=0;
    cout<<"Enter the Range : "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter the Value :"<<endl;
        cin>>a[i];
        sum=sum+a[i];

    }
    cout<<"Sum of Elements In Array : "<<sum<<endl;
    return 0;
}