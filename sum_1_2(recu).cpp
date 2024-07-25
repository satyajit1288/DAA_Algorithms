#include<iostream>

using namespace std;

int get_staircase(int n)
{
    if(n == 0 || n == 1 || n == 2 || n == 3)
    return n;
    else return get_staircase(n-1) + get_staircase(n-2);
}

int main()
{
    int n,sum=0;
    cout<<"Enter a number\n";
    cin>>n;

    sum = get_staircase(n);
    
    cout<<"The number of ways "<<n<<" can be expressed as sum of 1 and 2 is "<<sum<<endl;
    return 0;
}