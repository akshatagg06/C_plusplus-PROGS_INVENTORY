/*
Sample Input
1   //testcases
10111 10000

Sample Output
00111

compare the two strings characterwise, if equal => append 0, if not equal => append 1;
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int times;
	cin>>times;
	
	while(times--){
	    int len = 0;
	    string s1,s2,s3;
	    cin>>s1;
	    cin>>s2;
	    
        len = s1.length();
	    for(int i = 0; i<len; i++){
	        if(s1[i] == s2[i]){
	            s3.append(1,'0');
	        }
	        else{
	            s3.append(1, '1');
	        }
	    }
	   cout<<s3<<endl;
	}
	return 0;
}

