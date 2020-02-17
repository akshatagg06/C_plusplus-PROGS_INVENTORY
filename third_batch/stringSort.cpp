/*
 Your task is to help Nishant Sort all the strings ( lexicographically ) but 
 if a string is present completely as a prefix in another string, then string with longer 
 length should come first.

Sample Input
3
bat
apple
batman

Sample Output
apple
batman
bat
*/
#include <bits/stdc++.h>
using namespace std;

bool isSubstr(string str1, string str2){
    int a = str2.length(),
		b = str1.length();

	for(int i = 0; str2[i] != '\0'; i++){
		int j = 0;
		while(j<b){
			if(str2[i] == str1[j]){
				j++;
				i++;
			}
			else break;
		}
		if(j == b) return true;
	}
	return false;
}

bool comp(string a, string b){
    return a>b;
}

int main() {
	int n;
	cin>>n;
	cin.get();
    string str[10000];
    for(int i = 0; i<n; i++){
        cin>>str[i];
    }
    
    sort(str, str+n);
    
    for(int i = 0, j = 1; i<n-1, j<n; i++, j++){
        // cout<<str[i]<<"  "<<str[j]<<endl;
        if(isSubstr(str[i], str[j])){
            // cout<<"detected"<<endl;
            sort(str + i, str + j + 1, comp);
        }
    }
    for(int i = 0; i<n; i++){
        cout<<str[i]<<"  ";
    }
    
	return 0;
}
