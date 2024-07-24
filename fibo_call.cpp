#include<iostream>

using namespace std;

int count = 0;
int fibonacci(int n)
{
    //static int count = 0;
    count++;
    if(n == 1 || n == 2)
    {
        return  1;
    }
    else  return fibonacci(n-1) + fibonacci(n-2);
}


int main()
{
    int n,res;
    cout<<"Enter the nth fibonacci number\n";
    cin>>n;

    res = fibonacci(n);
    cout<<"number of function calls made in case of "<<n<<"th fibonacci number is "<<count<<endl;
    return 0;
}