#include<iostream>
#include<vector>

using namespace std;

int get(vector<int> v,int num)
{
    int l=0,r=v.size()-1,mid;
    while(l <= r)
    {
        mid = (l+r)/2;

        if(num > v[mid])
        l = mid + 1;
        else if (num < v[mid])
        r = mid - 1;
        else return mid;
    }
    return r;
}

int main()
{
    //cout<<"hello world"<<endl;
    vector<int> v;
    int n;
    cout<<"Enter a number\n";
    cin>>n;

    int i,a=0,b=1,sum,k;
    v.push_back(1);

    sum = a + b;
    while(sum < n)
    {
        v.push_back(sum);
        a = b;
        b = sum;

        sum = a + b;
    }

    for(int j=0;j<v.size();j++)
    cout<<v[j]<<" ";
    
    cout<<endl;
    while(n > 0)
    {
        k = get(v,n);
        n -= v[k];

        cout<<k<<","<<v[k]<<"  ";
    }

    return 0;
}