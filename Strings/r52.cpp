#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,d;
    cin >> s;
    d.push_back(s[0]);
 
    for(int i=1;i<s.length()-1;i++)
    {
        if(s[i]!=s[i-1])
          d.push_back(s[i]);
        
    }
    cout << d;
}