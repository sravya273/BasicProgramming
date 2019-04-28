#include <iostream>
using namespace std;

int main() {
	int n,count;
	cin>>n;
	count =0;
	while(n)
	{
	    n=n&(n-1);
	    count++;
	}
	cout<<"count="<<count<<endl;
}
