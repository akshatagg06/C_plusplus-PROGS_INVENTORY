/*

1 2 3 4 5 6 7 
1 2 3 4 5 6 * 
1 2 3 4 5 * * * 
1 2 3 4 * * * * * 
1 2 3 * * * * * * * 
1 2 * * * * * * * * * 
1 * * * * * * * * * * * 

*/

#include <iostream>
using namespace std;

int main() {
	int n,i,j;
	cin>>n;
	
	for(i = 1; i<=n; i++){
	    cout<<i<<" ";
	}cout<<endl;
	
	for(i = 1; i<n; i++){
	    for(j = 1; j<=n-i; j++){
	        cout<<j<<" ";
	    }
	    
	    for(j = 1; j<=(2*i - 1); j++){
	        cout<<"* ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}
