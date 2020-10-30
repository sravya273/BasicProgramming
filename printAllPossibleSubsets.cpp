// generate all the possible subsets of a set 
#include <bits/stdc++.h>
using namespace std;
void printAllPossibleSubsets(char A[], int n)
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
	printAllPossibleSubsets(A,n);
	return 0;
}
