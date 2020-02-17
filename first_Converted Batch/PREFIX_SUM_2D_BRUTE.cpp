//PREFIX SUM 2D MATRIX BRUTE FORCE

/*
input:
3 3
10 20 30
5 10 20
2 4 6


output:
10 30 60 
15 45 95 
17 51 107 

*/

#include <iostream>
using namespace std;

int main() {
	int i, j, m, n, arr[100][100];
	
	cin>>m;
	cin>>n;
	
	for(i = 0; i<m; i++){
	    for(j = 0 ; j<n; j++){
	        cin>>arr[i][j];
	    }
	}
	
	for(i = 0; i<m; i++){
	    for(j = 1 ; j<n; j++){
	        arr[i][j] += arr[i][j-1];
	    }
	}
	
	for(j = 0; j<n; j++){
	    for(i = 1 ; i<m; i++){
	        arr[i][j] += arr[i-1][j];
	    }
	}
	
	
	for(i = 0; i<m; i++){
	    for(j = 0 ; j<n; j++){
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
