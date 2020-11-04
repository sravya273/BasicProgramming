/*

Given a string S find all possible substrings of the string in lexicographically-sorted order.

Example 1:

Input : str = "abc"
Output: a ab abc ac b bc c 
Explanation : There are 7 substrings that 
can be formed from abc.
Example 2:

Input: str = "aa"
Output: a a aa
Explanation : There are 3 substrings that 
can be formed from aa.

*/

#include <bits/stdc++.h>
using namespace std;
void printPowerSet(char A[], int n)
{
    for(int i=0;i<(1<<n); i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            cout<<A[j]<<" ";
        }
        cout<<endl;
    }
}

int main() 
{
	int n;
	cin>>n;
	char A[n];
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	cout<<"Printing all possible subsets"<<endl;
	printPowerSet(A,n);
	return 0;
}
