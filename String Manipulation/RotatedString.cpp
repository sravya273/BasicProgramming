/*

Given a string s1 and a string s2, write a snippet to say whether s2 is a rotation of s1?
(eg given s1 = ABCD and s2 = CDAB, return true, 
given s1 = ABCD, and s2 = ACBD , return false)

*/

#include <iostream>
using namespace std;

bool isRotatedString(string str1, string str2)
{
    if(str1.length() != str2.length())
    return false;
    
    else{
        string temp = str1+str1;
        if(temp.find(str2) == string::npos)
        return false;
    }
    return true;
}
int main() {
    string str1,str2;
    cin>>str1>>str2;
    
    if(isRotatedString(str1,str2))
    cout<<str1<<" and "<<str2<<" are rotated"<<endl;
    
    else cout<<str1<<" and "<<str2<<" are not rotated"<<endl;
	return 0;
}
