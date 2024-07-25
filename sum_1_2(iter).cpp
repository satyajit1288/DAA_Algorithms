#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //cout<<"hello world"<<endl;
    vector<int> v;
    int n;
    cout<<"Enter a number\n";
    cin>>n;

    int i,a=0,b=1,sum=0;

    //sum = a + b;
    for(i=0;i<n;i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    
    cout<<"The number of ways "<<n<<" can be expressed as sum of 1 and 2 is "<<sum<<endl;
    return 0;
}