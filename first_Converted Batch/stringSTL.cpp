/*
30
Apple
hahah
hy my name is
yo
*/

#include <iostream>
#include <cstring>    //for STL 
#include <algorithm> //for sort method
using namespace std;

int main() {
    string s2 = "it is not about lyrics anymore";
    cout<<s2.length()<<endl;
    
	string s1[] = {"hy my name is", "Apple", "yo", "hahah"};
	sort(s1, s1+4);   //sort(arr, arr+n);    where n is the size of the string array.
	
	for(int i=0; i<4; i++){
	    cout<<s1[i]<<endl;
	}
	return 0;
}
