#include <bits/stdc++.h>
using namespace std;

int countSetBits(int x)
{
    int count = 0;
    while(x)
    {
        x = x&(x-1);
        count++;
    }
    return count;
}
int main() 
{
	int n;
	cin>>n;
	cout<<n<<"has "<<countSetBits(n)<<" set bits"<<endl;
	return 0;
}
