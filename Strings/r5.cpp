#include<bits/stdc++.h>
using namespace std;
bool drome(string s, int left , int right)
{
    while(left<right)
    {
        if(s[left]!=s[right])
        return false;
        left++;
        right--;
    }
    return true;
}

bool palin(string s)
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
        return drome(s,left+1,right) ||
        drome(s,left,right-1);

    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    int result = palin(s);
    cout << result;

}