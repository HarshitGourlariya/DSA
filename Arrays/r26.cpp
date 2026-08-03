#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin >>n >> k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int count =0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==2)
        count++;
    }
    cout << count;

}