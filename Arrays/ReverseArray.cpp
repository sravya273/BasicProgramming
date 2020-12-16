#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int start, int end)
{
    if(start>=end)
    return;
    int temp =a[start];
    a[start]=a[end];
    a[end]=temp;
    reverseArray(a,start+1,end-1);
}

void printArray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	int i =0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	printArray(a,n);
	reverseArray(a,0,n-1);
	printArray(a,n);
	return 0;
}
