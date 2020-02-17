//which row or colummn has the maximum sum, and what is that max sum. 

#include <iostream>
using namespace std;

int maxElement(int a[]);

int main() {
	int arr[100][100], i, j, row_Sum[10], column_Sum[10],m,n;
	
	cin>>m;
	cin>>n;
	
	for(i = 0; i<m; i++){
	    for(j = 0; j<n; j++){
	        cin>>arr[i][j];
	    }
	}
	
	for(i = 0; i<m; i++){
	    for(j = 0; j<n; j++){
	        row_Sum[i] += arr[i][j];
	    }
	}
	
	for(j = 0; j<n; j++){
	    for(i = 0; i<m; i++){
	        column_Sum[j] += arr[i][j];
	    }
	}
	
    int maxR = maxElement(row_Sum);
    int maxC = maxElement(column_Sum);
    
    int answer = (maxR > maxC)?maxR:maxC;
    
    cout<<answer;
    
	return 0;
}

int maxElement(int a[]){
    int largest = 0, i;
    
    int length = sizeof(a)/sizeof(a[0]);
    
    for(i = 0; i<length; i++){
        if(a[i] > largest){
            largest = a[i];
        }
    }
    
    return largest;
}
