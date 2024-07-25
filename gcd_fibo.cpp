#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    int r,temp;
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

    return a;

}
int get(int n)
{
    int sum,i,a=0,b=0;
    sum = 1;
    for(i=0;i<n;i++)
    {
        //cout<<sum<<" ";

        a = b;
        b = sum;
        sum = a + b;
    }

    return sum;
}
int main()
{

    int a,b,res1,n,res2;
    cout<<"enter any two indices you want to find the gcd of their respective fibonacci number"<<endl;
    cin>>a>>b;

    res1 = gcd(get(a),get(b));

    n = gcd(a,b);

    res2 = get(n);

    if(res1 == res2)
    cout<<"GCD is verified"<<endl;
    else cout<<"GCD is not verified"<<endl;

    return 0;
}