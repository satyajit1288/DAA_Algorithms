#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;

    int i,a=0,b=0,sum=1;
    cout<<"Fibonacci Sequence till "<<n<<endl;
    for(i=0;i<n;i++)
    {
        cout<<sum<<" ";
        a = b;
        b = sum;

        sum = a + b;
    }
cout<<endl;
    return 0;
}