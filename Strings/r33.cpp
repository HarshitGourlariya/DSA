#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int idx=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[idx-1])
        {
            s[idx]=s[i];
            idx++;
        }

    }
    for(int i=0;i<idx;i++)
    {
        cout << s[i];
    }
}