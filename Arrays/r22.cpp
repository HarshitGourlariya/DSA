#include<bits/stdc++.h>
using namespace std;
bool check(int arr[] , int n,int i)
{
    int j=n-1;
for(i=0;i<n;i++)
{
    if(arr[i]!=arr[j])
    {return false;}
    j--;
}
return true;
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
    int result = check(arr,n,i);
    cout << result<<" ";

}