#include<bits/stdc++.h>
using namespace std;
bool isaplha(char s)
{
    return s >= 'a' && s <= 'z'||
           s >= 'A' && s <= 'Z'||
           s >= '0' && s <= '9';
}
char lower(char s)
{
    if(s>='A' && s<='Z')
    {
        return s + ('a'-'A');
    }
    return s;
}
bool check(string s)
{
    int left =0,right =s.length()-1;
    while(left<right)
    {
        while(left<right && !isaplha(s[left]))
        left++;
        while(left<right && !isaplha(s[right]))
        right--;
    
    if(lower(s[left])!=lower(s[right]))
    {return false;
    }
    left++;
    right--;
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    int result = check(s);
    cout << result;
}