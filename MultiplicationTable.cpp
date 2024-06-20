#include <iostream>
using namespace std;

int main()
{
    int i,n,t;
    cout<<"\n Enter the range :"<<endl;
    cin>>n;
    cout<<"Enter the table :"<<endl;
    cin>>t;
    for(i=1;i<=n;i++)
    {
    
        cout<<i<<"*"<<t<<"="<<i*t<<endl;
    }

    return 0;

}