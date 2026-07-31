#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >>n;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int avg = (n+1)/2;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>avg)
        {
           cout << arr[i]<<" ";
        }

    }
    
}