#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int i=0;
    int right =0;
    for(i=0;i<s.length()-1;i++)
    {
        if(s[i]!='x')
        {
            char temp = s[i];
            s[i]=s[right];
            s[right]=temp;
            right++;

        }
    }
    cout << s <<" ";
}