#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>b>>a;
    if((2*a)% b == 0)
    {
        cout<<2*a/b<<endl;
    }
    else
    {
        cout<<2*a/b+1<<endl;
    }
    return 0;
}
