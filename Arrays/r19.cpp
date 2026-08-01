#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
     p=n+1;
    int esum = p*(p+1)/2;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int result = esum-sum;
    cout << result;
    

}