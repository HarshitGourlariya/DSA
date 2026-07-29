#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum;
    cin >>n>>sum;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int count =0;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            count++;
        }
    }

    cout << count;

}