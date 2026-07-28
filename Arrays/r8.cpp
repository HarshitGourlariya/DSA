#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin >>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int left =0;
    int right = k-1;
    while(left<right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }

}