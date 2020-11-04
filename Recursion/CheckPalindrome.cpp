/*
Given a string S, check if it is palindrome or not recursively.

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

bool isPalindrome(string str, int start, int end)
{
    if(!end<start)
    {
        if(end == start)
        return true;
    
        else if(str[start]!=str[end])
        return false;
    
        return isPalindrome(str,start+1,end-1);
    }
    return true;
}
int main() {
    string str;
    cin>> str;
    int length = str.length()-1;
    
    if(isPalindrome(str,0,length))
    cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
	return 0;
}
