#include <iostream>
using namespace std;

bool isPowerOfTwo(int x)
{
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return (x && !(x &(x-1)));
}
int main() 
{
	int n;
	cin>>n;
	if(isPowerOfTwo(n))
	{
	    cout<<n<<" is a power of 2"<<endl;
	}
	else
	{
	    cout<<n<<" is not a power of 2"<<endl;
	}
	return 0;
}
