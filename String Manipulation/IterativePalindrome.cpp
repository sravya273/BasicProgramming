/*
Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int length = str.length();
    for(int i=0;i<length/2;i++)
    {
       if(str[i]!=str[length-i-1])
       return false;
    }
    return true;
}
int main() {
    string str;
    cin>> str;
    if(isPalindrome(str))
    cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
	return 0;
}
