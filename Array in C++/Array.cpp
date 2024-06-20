#include <iostream>
using namespace std;

int main ()
{
    int a[5]={10,20,30,40,50};
    int b[]={1,2,3,4,5};
    for (int x:b)
    {
        cout<<x<<endl;
    }
    cout<<"Count : "<<sizeof(b)/sizeof(int)<<endl;

    return 0;
}