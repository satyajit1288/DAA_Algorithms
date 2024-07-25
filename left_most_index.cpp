#include<iostream>
#include<vector>

using namespace std;

int get(vector<int> v,int x)
{
    int l,r,mid;
    l=0;
    r=v.size()-1;
    
    while(l != r)
    {
        mid = (l+r)/2 ;

        if(v[mid] < x)
        l = mid + 1;
        else r = mid;
    }

    if(v[l] == x)
    return r;
    else return -1;
}

int main()
{

    int x,i;
    vector<int> v{1,1,2,2,2,5,8};

    cout<<"enter a number you want to search"<<endl;
    cin>>x;

    i = get(v,x);

    if(i >= 0)
    cout<<x<<" is found in "<<i<<"th position in terms of the leftmost index"<<endl;
    else cout<<x<<" is not found"<<endl;


    return 0;
}