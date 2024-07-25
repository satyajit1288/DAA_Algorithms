#include <iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

int main() 
{
    int i,s = 2,c = 2,l,r,m,x,cn=0;
    int arr[100000];
    for(i = 0; i < 100000; i++) 
    {
        arr[i] = i * s + c;
    }

    l = 0;
    r = 99999;
    cout << "Enter a number you want to search from the list: ";
    cin >> x;

    // Measure time for matrix multiplication
    auto start = high_resolution_clock::now();
    while(l <= r ) 
    {
        m = (l+r)/2;

        if(arr[m] < x)
        {
            l = m + 1;
        }
        else if(arr[m] > x)
        {
            r = m - 1;
        }
        else
        {
            //cout<<x<<" is present in the "<<m<<" the position"<<endl;
            //return 0;
            cn = 1;
            break;
        }
    }
    if(cn == 1)
    cout<<x<<" is present in the "<<m<<" the position"<<endl;
    else cout<<x<<" is not present in the list"<<endl;

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Time taken for binary search: " << duration.count() << " microseconds" << endl;
    return 0;
}