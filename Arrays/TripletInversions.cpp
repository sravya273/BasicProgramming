//Count Inversions of size three in a given array

#include <bits/stdc++.h>
using namespace std;

int findInversionCount(vector <int>&a)
{
    int n= a.size();
    int inversionCount = 0;   
    for(int i=1;i<n-1;i++)
    {
        int left =0,right=0;
        for(int j=0;j<=i-1;j++)
        {
            if(a[j]>a[i])
            left++;
        }
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            right++;
        }
        inversionCount+= left*right;
    }
    return inversionCount;
}

int main()
{
    int n;
    cin>>n;
    vector <int> numbers;
    int k;
    while(n--)
    {
        cin>>k;
        numbers.push_back(k);
    }
    cout<<"Number of inversions are: "<<findInversionCount(numbers);
}

/*
Input: 4
8
4
2
1
Output:
Number of inversions are: 4
*/
