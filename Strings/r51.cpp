#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i=0,j=0;
    for(j=0;j<s.length()-1;j++)
    {
        if(s[j]!='x')
        {
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
        }
        
    }
    cout << s;

}