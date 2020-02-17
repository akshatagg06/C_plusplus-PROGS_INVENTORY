/*
frequency counter

dnvjfnvlksdmknnvvvvvvvvvvvv

27
0  0  0  2  0  1  0  0  0  1  2  1  1  4  0  0  0  0  1  0  0  14  0  0  0  0  
v
14

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	char ch1[100];
	cin>>ch1;
	int l1 = strlen(ch1);
	cout<<l1<<endl;
	
    //26-element frequency measuring array
	int freq[26] = {0};
	for(int i = 0; i<l1; i++){
	    freq[ch1[i] - 'a']++;
	}
	for(int i = 0; i<26; i++){
        cout<<freq[i]<<"  ";
	}
	
	cout<<endl;
	
    //finding the maximum index of the freq array.
	int index = 0, max = freq[0];
	for(int i = 1; i<=25; i++){
	    if(freq[i]>max){
	        max = freq[i];
	        index = i;
	    }
	}
	
	cout<<char(index + 'a'); //typecasting, because the '+' sign would convert the value to integer.
    cout<<max<<endl;  //the frequency of the max repeating character.
	
	return 0;
}
