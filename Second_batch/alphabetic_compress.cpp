/*
this program compresses a string but gives the compressed output in an alphabetic order
that is, 

wwwwwbbbbaacccc

a2b4c4w5, (not w5b4a2c4)
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin>>str;

    int len = strlen(str);
    int freq[26] = {0};

    for(int i = 0; i<len; i++){
        freq[str[i] - 'a']++;
    }

    for(int i = 0; i<26; i++){
        if(freq[i] != 0){
            cout<<(char)(i+'a')<<freq[i];
        }
    }
    return 0;
}


