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
    int product = 1;
    for(i=0;i<n;i++)
    {
        product*=arr[i];
    }
    for(i=0;i<n;i++)
    {
        arr[i] =product/arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }

}
