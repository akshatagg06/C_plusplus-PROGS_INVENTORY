/*
input: abc
output: 8 subsequences
  (Null)
a
b
ab
c
ac
bc
abc
*/
#include<bits/stdc++.h>
using namespace std;

//mapping function
void filterChars(int n, string a){
    int j = 0;
    while(n>0){
        int last_bit = (n&1);
        if(last_bit){
            cout<<a[j];
        }
        j++;
        n = n >> 1;
    }
}

void printSubsets(string a){
    int n = a.length();
    for(int i = 0; i<(1<<n); i++){
        filterChars(i,a);
    }
}

int main(){
    string a;
    printSubsets(a);
    return 0;
}