#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int get(vector<int> arr,int x)
{
    int l,r,mid;
    l=0;
    r=arr.size()-1;
    
    while(l != r)
    {
        mid = l+(r-l+1)/2;

        if(arr[mid] > x)
        r = mid - 1;
        else l = mid;
    }
    
    if(arr[l] == x)
    return l;
    else return -1;
}

int main()
{

    int x,i;
    vector<int> arr{1,1,2,2,2,5,8};

    cout<<"enter a number"<<endl;
    cin>>x;

    i = get(arr,x);

    if(i >= 0)
    cout<<x<<" is found in "<<i<<"th position in terms of the rightmost index"<<endl;
    else cout<<x<<" is found not found"<<endl;

    return 0;
}
