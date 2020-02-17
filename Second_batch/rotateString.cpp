/*
string rotate

hello
2

lohel
*/
#include <bits/stdc++.h>
using namespace std;

void rotate(char a[], int k){
    int i = strlen(a);
    
    //shifting entire string by k places
    while(i>=0){
        a[i+k] = a[i];
        i--;
    }
    
    i = strlen(a);
    int j = i-k;
    int s = 0;
    
    while(j<=(i-1)){
        a[s] = a[j];
        s++;
        j++;
    }
    a[i-k] = '\0';
    
    cout<<a;
}

int main() {
	char str[100];
    cin>>str;
	int n;
	cin>>n;
	
	rotate(str, n);
	return 0;
}
