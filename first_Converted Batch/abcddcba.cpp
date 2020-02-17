#include <iostream>
using namespace std;

int main() {
	/*
	    ABCDEEDCBA
	    ABCDDCBA
	    ABCCBA
	    ABBA
	    AA
	*/
	
	//take the number of rows
	int n;
	cin>>n;
	
	//row number
	int i = 0;
	while(i<n){
	    char ch = 'A';
	 //print for ch++
	    for(int j = 0; j<n-i; j++){
	        cout<<ch;
	        ch++;
	    }
	    ch--;
	 //print for ch-- 
	    for(int j = 0; j<n-i; j++){
	        cout<<ch;
	        ch--;
	    }
	 //endl
	    cout<<endl;
	 //update row number
	    i++;
	}
	return 0;
}
