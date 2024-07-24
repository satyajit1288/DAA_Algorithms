#include<iostream>

using namespace std;

int main()
{
    int a,b,q=0,n;

    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    
    n = a;
    while(a >= b)
    {
        a -= b;
        q++;
    }

    cout<<"when "<<n<<" is divided by "<<b<<" the quotient and remainder are "<<q<<" and "<<a<<endl;

    return 0;
}