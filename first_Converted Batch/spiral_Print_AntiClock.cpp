#include <iostream>
using namespace std;

void spiralPrintAnti(int **arr, int r, int c){
    int i,j;
    
    int startRow = 0,
	    endRow = r-1,
	    startCol = 0,
	    endCol = c-1;
	    
	while(startRow <= endRow && startCol <= endCol){
	    
	    //firstCol
	    for(i = startRow; i<=endRow; i++){
	        cout<<arr[i][startCol]<<", ";
	    }
	    startCol++;
	    
	    //lastRow
	    for(j = startCol; j<=endCol; j++){
	        cout<<arr[endRow][j]<<", ";
	    }
	    endRow--;
	    
	    //lastCol
	    for(i = endRow; i>=startRow; i--){
	        cout<<arr[i][endCol]<<", ";
	    }
	    endCol--;
	    
	    //first row
	    for(j = endCol; j>=startCol; j--){
	        cout<<arr[startRow][j]<<", ";
	    }
	    startRow++;
	}
	cout<<"END";
}

int main(int argc, char *argv[]) {
	int r,c;
	
	cin>>r>>c;
	
	int **arr = new int*[r];
	for(int i = 0; i<r; i++){
	    arr[i] = new int[c];
	}
	
	for(int i = 0; i<r; i++){
	    for(int j = 0; j<c; j++){
	        cin>>arr[i][j];
	    }
	}
	
	spiralPrintAnti(arr, r, c);
	return 0;
}
