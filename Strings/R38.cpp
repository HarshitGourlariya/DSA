#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int j =0;
    for(int i=0;i<s.length()-1;i++)
    {
       if(s[i]!='x')
       {
        char temp = s[j];
        s[j] = s[i];
        s[i]=temp;
        j++;
       }
    }
    cout <<s;
    
}