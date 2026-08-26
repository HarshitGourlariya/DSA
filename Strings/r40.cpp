#include<bits/stdc++.h>
using namespace std;
bool check(string s , int left , int right)
{
    while(left<right)
    {
    if(s[left]!=s[right])
    {
        return false;
    }
    left++;
    right--;

}
return true;
}
bool plain(string s)
{
    int left =0;
    int right = s.length()-1;
    while(left<right)
    {
        if(s[left]==s[right])
        {
            left++;
            right--;
        }
        else
        return check(s,left+1,right) || 
               check(s,left,right-1);
    }
}
int main()
{
    string s;
    cin >>s;
    int result = plain(s);
    cout << result;
    
}