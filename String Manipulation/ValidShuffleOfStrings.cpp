/*

Check if a given string is a valid shuffle of two other strings

Input XY, 12

1XY2 is a valid shuffle of XY and 12
Y12X is not a valid shuffle of XY and 12

Explaination
1XY2 and Y12X. We are checking if these two strings are valid shuffle of strings first(XY) and second(12).
Here, the program says 1XY2 is a valid shuffle of XY and 12. However, Y12X is not a valid shuffle.
This is because Y12X has altered the order of string XY. Here, Y is used before X. 
Hence, to be a valid shuffle, the order of string should be maintained.

*/

#include <iostream>
using namespace std;

bool isValidShuffle(string str1, string str2, string result)
{
    int l1,l2,l3;
    l1= str1.length();
    l2= str2.length();
    l3= result.length();

    if(l1 + l2 != l3)
    return false;
    
    int i=0,j=0,k=0;
    for(int k=0; k<l3; k++)
    {
        if(result[k] == str1[i] && i<l1)
        i++;
        
        else if(result[k] == str2[j] && j<l2)
        j++;
        
        else
        return false;
    }
    if(i<l1 || j<l2)
    return false;
    
    return true;
}

int main() {
    string str1,str2,result;
    cin>>str1>>str2>>result;
    
    if(isValidShuffle(str1,str2,result))
    cout<<"Valid Shuffle"<<endl;

    else cout<<"Invalid Shuffle"<<endl;
	return 0;
}
