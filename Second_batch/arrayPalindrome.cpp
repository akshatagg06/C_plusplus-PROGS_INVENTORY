/*
array palindrome checker

4
1 2 2 1


1 2 2 1
true

*/
#include <iostream>
using namespace std;

int main() {
	int n, arr[100], arrRev[100], i, j;
	cin>>n;
	
	for(int i = 0; i<n; i++){
	    cin>>arr[i];
	}
	
	for(i = n-1, j = 0; i>=0 && j<n; i--, j++){
	    arrRev[j] = arr[i];
	}
	
	for(int i = 0; i<n; i++){
	    cout<<arrRev[i]<<"  ";
	}
	
	cout<<endl;
	bool flag = true;
	
	for(int i = 0; i<n; i++){
	    if(arr[i] != arrRev[i]){
	        flag = false;
	    }
	}
	
	if(flag == false){
	    cout<<"false";
	}
	else cout<<"true";
	return 0;
}
