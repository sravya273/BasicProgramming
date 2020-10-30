#include <iostream>
using namespace std;
bool check_ith_bit(int n, int i)
{
    return n&(1<<i);
}

int main() 
{
	int n,i;
	cin>>n>>i;
	cout<<i<<" bit of "<<n<<" is "<<check_ith_bit(n,i);
	return 0;
}
