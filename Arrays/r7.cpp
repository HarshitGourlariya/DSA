 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j;
    cin >>n;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        cout << arr[i]<<" ";
        
    }
   
}
