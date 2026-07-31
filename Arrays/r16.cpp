#include<bits/stdc++.h>
using namespace std;
bool check(int i,int arr[],int brr[],int n)

{
     for(i=0;i<n;i++)
    {
        if(arr[i]!=brr[i])
        return false;
        
    }
    return true;
}
int main()
{
    int i,n;
    cin >>n;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> brr[i];
    }
    bool result = check(i,arr,brr,n);
    cout << result;

   

}
