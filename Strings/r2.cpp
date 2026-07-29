#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
    int left =0;
    int right = s.length()-1;
    while(left<right)
    {
        if(s[left]!=s[right])
        return false;
        else{
            left++;
            right--;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >>s;
    int result = palindrome(s);
    cout << result;
    

}