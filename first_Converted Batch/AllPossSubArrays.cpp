
/*
i/p:
5 
12 24 36 48 60

o/p:
12 
12 24 
12 24 36 
12 24 36 48 
12 24 36 48 60 
24 
24 36 
24 36 48 
24 36 48 60 
36 
36 48 
36 48 60 
48 
48 60 
60 
*/

#include <iostream>
using namespace std;

int main() {
	int n, i, a[100], j, k;
	cin>>n;
	
	for(i = 0; i<n; i++){
	    cin>>a[i];
	}
	
	for(i = 0; i<n; i++){
	    for(j = i; j<n; j++){
	        for(k = i; k<=j; k++){
	            cout<<a[k]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
