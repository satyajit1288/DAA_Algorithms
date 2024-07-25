#include <iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

int main() 
{
    int i,s = 2,c = 2,l,r,m,x,cn=0;
    int arr[10000];
    for(i = 0; i < 10000; i++) 
    {
        arr[i] = i * s + c;
    }

    l = 0;
    r = 9999;
    cout << "Enter a number you want to search from the list: ";
    cin >> x;


    // Measure time for matrix multiplication
    auto start = high_resolution_clock::now();
    
    while(l <= r ) 
    {
        m = l + ((r - l) * (x - arr[l])) / (arr[r] - arr[l]);

        if (arr[m] == x) 
        {
            //cout << x << " is present in the " <<m<<"th position"<<endl;
            //return 0;
            cn = 1;
            break;
        }
        else if (arr[m] < x) 
        {
            l = m + 1;
        } 
        else 
        {
            r = m - 1;
        }
    }
   /* if (l == r) 
    {
        if (arr[l] == x) 
        {
            cout << x << " is present in the list" << endl;
        } 
        else 
        {
            cout << x << " is not present in the list" << endl;
        }
    }*/

    if(cn == 1)
    cout<<x<< " is present in the " <<m<<"th position"<<endl;
    else cout<<x << " is not present in the list"<<endl;

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Time taken for interpolation search: " << duration.count() << " microseconds" << endl;
    return 0;
}
