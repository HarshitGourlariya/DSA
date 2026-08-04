#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[max])
        {
            max = i;
        }
    }
    cout << max;
}