#include <iostream>
using namespace std;

int main()
{
    int a[100],i,n,t;
    cout<<"\n Enter the Range : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter the value :";
        cin>>a[i];
        }
     t=a[0];
     for(i=0; i<n; i++)
     {
        if(t>a[i])
        {
            t=a[i];
        }
     }
      cout<<"\n The Greatest Element in Array : "<<t<<endl;
      return 0;
    }
   
    
