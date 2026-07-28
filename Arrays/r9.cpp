#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int right=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            int temp = arr[i];
            arr[i] = arr[right];
            arr[right]=temp;
            right++;
        }

    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}