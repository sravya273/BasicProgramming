/*
Find the two non-repeating elements in an array of repeating elements/ Unique Numbers 2
Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. 
Find the other two numbers  (in ascending order).

Example 1:

Input: 
2
1 2 3 2 1 4
Output:
3 4 
Explanation: 3 and 4 occur exactly once.

*/
#include <bits/stdc++.h>
using namespace std;

void FindUniqueNumbers(vector <int> numbers, int n,int &x,int &y)
{
    int totalxor =numbers[0];
    for(int i=1;i<n;i++)
    {
        totalxor = totalxor ^ numbers[i];
    }
    int rightmost_setbit;
    rightmost_setbit = totalxor & ~(totalxor-1);
    for(int i=0;i<n;i++)
    {
        if(rightmost_setbit &  numbers[i])
        x= x ^ numbers[i];
        
        else
        y = y ^ numbers[i];
    }
    return;
}
int main() {
    int n;
    cin>>n;
    int a;
    vector<int> numbers(n);
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
   
    int x=0,y=0;
    FindUniqueNumbers(numbers,n,x,y);
    cout<<"Unique numbers are "<<x<<" and "<<y<<endl;
	return 0;
}
