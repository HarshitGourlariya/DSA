#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >>s1>>s2;
    int i=0,j=0;
    string result;
    while(i<s1.length() && j<s2.length())
    {
        if(s1[i]<=s2[j])
        {
            result+=s1[i];
            i++;
        }
        else
        {
            result+=s2[j];
            j++;
        }

    }
    while(i<s1.length())
    {
        result+=s1[i];
        i++;
    }
    while(j<s2.length())
    {
        result+=s2[j];
        j++;
    }
    cout << result;

    
}