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

    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1]=temp;
    
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}