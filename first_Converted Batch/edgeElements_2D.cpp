//print the edge elements of a 2-D Array
/*

r = 4 
c = 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

1 2 3 4 8 12 16 15 14 13 9 5 

*/
#include <iostream>
using namespace std;

void spiralPrint(int a[100][100], int R, int C){
    int i, j = 0;
    
    while(j<C){
        i = 0;
        cout<<a[i][j]<<" ";
        j++;
    }
    j--;
    i++;
    
    while(i<R){
        cout<<a[i][j]<<" ";
        i++;
    }
    i--;
    j--;
    
    while(j>=0){
        cout<<a[i][j]<<" ";
        j--;
    }
    j++;
    i--;
    
    // cout<<endl<<i<<endl<<j<<endl;
    
    while(i>0){
        cout<<a[i][j]<<" ";
        i--;
    }
}

int main() {
	int arr[100][100], r, c;
	
	cin>>r;
	cin>>c;
	
	for(int i = 0; i<r; i++){
	    for(int j = 0; j<c; j++){
	       cin>>arr[i][j]; 
	    }
	}
	
	spiralPrint(arr, r, c);
	
	return 0;
}
