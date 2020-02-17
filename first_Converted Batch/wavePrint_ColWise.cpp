// wave print, col wise

#include <iostream>
using namespace std;

int main() {
	int r, c, i, j, arr[100][100];
	
	cin>>r;
	cin>>c;
	
	for(i = 0; i<r; i++){
	    for(j = 0; j<c; j++){
	        cin>>arr[i][j];
	    }
	}
	
	for(j = 0; j<c; j++){
	    if(j%2 == 0){
	        for(i = 0; i<r; i++){
	            cout<<arr[i][j]<<", ";
	        }
	    }
	    else{
	        for(i = r-1; i>=0; i--){
	            cout<<arr[i][j]<<", ";
	        }
	    }
	}
	cout<<"END";
	return 0;
}
