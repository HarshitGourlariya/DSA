#include<bits/stdc++.h>
using namespace std;
char vowel(char ch)
{
    return ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'; 
}
string rev(string s)
{
    int left =0,right =s.length()-1;
    while(left<right)
    {
        while(left<right && !vowel(s[left]))
        left++;
        while(left<right && !vowel(s[right]))
        right --;
        
        char temp = s[left];
        s[left] = s[right];
        s[right]=temp;
        left++;
        right--;
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    string res = rev(s);
    cout << res;
}