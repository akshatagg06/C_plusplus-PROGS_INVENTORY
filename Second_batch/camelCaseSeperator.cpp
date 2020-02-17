/*
CAMEL CASE SEPERATOR

IAmACompetitiveProgrammer

I
Am
A
Competitive
Programmer
*/
#include <bits/stdc++.h>
using namespace std;

int ascii(char a){
    return int(a);
}

int main() {
	char ch[100];
	cin>>ch;
	int i;
	int l = strlen(ch);
	
	for(i = 0; i<l; i++){
	    if(ascii(ch[i])>=65 && ascii(ch[i])<=90){
	        cout<<ch[i];
	        int j = i+1;
	        while(j<=(l-1)){
	            if(ascii(ch[j])>=97 && ascii(ch[j])<=122){
	                cout<<ch[j];
	                j++;
	            }
	            else{
	                break;
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
