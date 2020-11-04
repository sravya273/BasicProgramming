#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str)
{
    int length = str.length();
    for(int i=0;i<length/2;i++)
    {
        swap(str[i], str[length-i-1]);
    }
}
int main() {
    string str;
    cin>> str;
    cout<<"Reversal of "<<str<<" is ";
    reverseString(str);
    cout<<str<<endl;
	return 0;
}
