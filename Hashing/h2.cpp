#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n)
{
     map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto p:mpp)
    {
        if(p.second>1)
        return true;
    }

    return false;
}
int main()
{
    int i,n;
    cin >>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
   
    int result = check(arr,n);
    cout << result;
    
}