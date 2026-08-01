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
    for(i=0;i<n;i++)
    {
        brr[i]=arr[i+1];
    }
    brr[n-1]=arr[0];
    for(i=0;i<n;i++)
    {
        cout << brr[i]<<" ";
    }
}