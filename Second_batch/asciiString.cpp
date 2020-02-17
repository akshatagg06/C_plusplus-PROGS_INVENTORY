/*
Take as input S, a string. 
Write a program that inserts between each pair of characters,
the difference between their ascii codes and print the ans.

acb


a2c-1b

*/

#include<bits/stdc++.h>
using namespace std;

int ascii(char a){
	return int(a);
}

int main() {
	int i;
	char ch[100];
	cin>>ch;
	int n = strlen(ch);

	for(i = 0; i<n; i++){
		cout<<ch[i];
		if(i != n-1){
			cout<<(ascii(ch[i+1]) - ascii(ch[i]));
		}
	}
	return 0;
}