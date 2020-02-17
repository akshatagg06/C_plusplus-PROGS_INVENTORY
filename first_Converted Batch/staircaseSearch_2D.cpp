/*
4 4
1 4 6 9
5 10 12 13
8 14 15 16
19 20 22 23
14

The element is found at location ( 2, 1 )
*/

#include <iostream>
using namespace std;

void staircaseSearch(int a[100][100], int R, int C, int key){
    //start with (0, C-1)th element 
    //return inside a void function, throws the compiler right outta the function.
    int i, j;
    i=0, j= C-1;
    
    while(i<R&&j>=0){
        if(key == a[i][j]){
            cout<<"The element is found at location"<<" ( "<<i<<", "<<j<<" )"<<endl;
            return; //breaks you right out of this function.
                    //break could not be used here, because it wil cause output to be 10.
                    //because it will break you out of just this loop, then cout<<0 will also function.
        }   
        else if(key>a[i][j]){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"Not found";
    return;
}

int main(){
	int arr[100][100], R, C, elem;
	
	cin>>R;
	cin>>C;
	
	for(int i = 0; i<R; i++){
	    for(int j = 0; j<C; j++){
	        cin>>arr[i][j];
	    }
	}
	
	cin>>elem;
	
	staircaseSearch(arr, R, C, elem);
	return 0;
}
