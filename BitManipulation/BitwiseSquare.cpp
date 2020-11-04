/*

Given an integer n, calculate the square of a number without using *, / and pow(). 

*/

#include <bits/stdc++.h>
using namespace std;

int BitwiseSquare(int n)
{
    if(n==0)
    return 0;
    
    else if(n<0)
    n=-n;
    
    int x = n>>1;
    
    if(n&1)
    return (BitwiseSquare(x)<<2)+(x<<2)+1;
    
    else return (BitwiseSquare(x)<<2);
    
}
int main() 
{
    int n;
    cin>>n;
    cout<<BitwiseSquare(n)<<endl;
	return 0;
}
