#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0,r;
    for(i=100; i<=999; i++)
    {
        n=i;
        while(n>0){
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;

        }
        if(sum==i){
            cout<<i<<endl;

        }
        sum=0;
    }

    return 0;
}


//problem solved