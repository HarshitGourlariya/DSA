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
    brr[0]=arr[n-1];
    for(i=0;i<n;i++)
    {
        brr[i+1]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout << brr[i] <<" ";
    }
}