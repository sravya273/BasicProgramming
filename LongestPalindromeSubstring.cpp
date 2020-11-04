/*
Given a string, find the longest substring which is palindrome.

For Example:

Input: Given string :"forgeeksskeegfor", 
Output: "geeksskeeg".

Input: Given string :"Geeks", 
Output: "ee".
*/

#include <bits/stdc++.h>
using namespace std;

void printLongestPalindrome(string s,int low, int length)
{
    for(int i=low;i<low+length;i++)
    cout<<s[i];
    cout<<endl;
}

int findLongestPalindrome(string s)
{
    int max =1;
    int length = s.length();
    int start =0;
    int low,high;
    for(int i=1;i<length;i++)
    {
        //even palindrome
        int low = i-1;
        int high = i;
        while(low>=0 && high<=length && s[low]==s[high])
        {
            if(high-low+1 >max)
            {
                start = low;
                max = high-low+1;
            }
            low--;
            high++;
        }
        
        //odd palindrome
        low = i-1;
        high = i+1;
        while(low>=0 && high<=length && s[low]==s[high])
        {
            if(high-low+1 >max)
            {
                start = low;
                max = high-low+1;
            }
            low--;
            high++;
        }
        
    }
    printLongestPalindrome(s,start,max);
    return max;
}
int main() 
{
    string s;
    cin>>s;
    cout<<"length of longest palindrome is "<<findLongestPalindrome(s);
	return 0;
}
