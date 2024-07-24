#include<iostream>

using namespace std;

int main()
{

    int a,b,temp,r,n,m;
    cout<<"enter any two number"<<endl;
    cin>>a>>b;

    n = a;m=b;
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    r=1;
    while(r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    cout<<"GCD of "<<n<<" and "<<m<<" is "<<a<<endl;

    return 0;
}