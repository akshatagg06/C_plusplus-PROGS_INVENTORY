/*
i/p: 
champ
champions
champion
championss

o/p:
championsss  champions  champion  champ  
*/

#include <bits/stdc++.h>
using namespace std;

bool comparator(string a, string b){
    return a>b;
}

int main() {
	string str[100];
    for(int i=0; i<4; i++){
        getline(cin, str[i]);
    }
    sort(str, str+4, comparator);
    for(int i = 0; i<4; i++){
        cout<<str[i]<<"  ";
    }
	return 0;
}
