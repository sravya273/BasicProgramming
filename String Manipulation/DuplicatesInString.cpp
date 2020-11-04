/*
Print all the duplicates in the input string
*/

#include <bits/stdc++.h>
using namespace std;

void findDuplicates(string str,vector <int> &count)
{
   for(int i =0;i<str.length();i++)
   {
       count[str[i]]++;
   }
   return;
}

void printDuplicates(vector <int> count){
    for(int i=0;i<256;i++)
    {
        if(count[i]>1)
        cout<<char(i)<<" "<<count[i]<<endl;
    }
}
int main() {
    string str;
    cin>> str;
    vector <int> count(256,0);
    findDuplicates(str,count);
    printDuplicates(count);
	return 0;
}
