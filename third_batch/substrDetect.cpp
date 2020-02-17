#include <bits/stdc++.h>
using namespace std;

bool isSubstr(string str1, string str2){
    int a = str1.length(),
		b = str2.length();

	for(int i = 0; str1[i] != '\0'; i++){
		int j = 0;
		while(j<b){
			if(str1[i] == str2[j]){
				j++;
				i++;
			}
			else break;
		}
		if(j == b) return true;
	}
	return false;
}

int main() {
	string str1, str2;
	cin>>str1;
	cin>>str2;
	
	if(isSubstr(str1, str2)) cout<<"YES";
	else cout<<"NO";
	return 0;
}
