#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i,x;
    cout<<"Enter the Range : "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter the Value : "<<endl;
        cin>>a[i];
    }
    cout<<"Enter to Find value : "<<endl;
    cin>>x;
    for(i=1; i<n; i++)
    {
        if(a[i]==x)
        {
            cout<<"Finded @"<<i<<endl;
            return 0;
        }
    }
    cout<<"Value Not Found"<<endl;
    return 0;
}