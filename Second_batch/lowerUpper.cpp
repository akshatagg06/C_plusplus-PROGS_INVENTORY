/*
LOWER UPPER
Print "lowercase" if user enters a character between 'a-z' , 
Print "UPPERCASE" is character lies between 'A-Z' and 
print "Invalid" for all other characters like $,.^# etc.
*/

#include <iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	
	int ascii = int(ch); //typecasting
	
	if(ch>=65 && ch<=90){
	    cout<<"UPPERCASE";
	}
	else if(ch>=97 && ch<=122){
	    cout<<"lowercase";
	}
	else
	    cout<<"Invalid";
	return 0;
}
