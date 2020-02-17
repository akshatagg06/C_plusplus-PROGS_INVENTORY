/*
9
-4 1 3 -2 6 2 -8 -9 4

The maximum sum of any subarray is: 10
1 3 -2 6 2 
The length of this subarray is: 5

*/
#include <iostream>
using namespace std;

int main() {
	int n, i, j, arr[100];
	int cumSum[100], maxSum = 0, currentSum = 0, left = -1, right = -1;
	
	cin>>n;
	
	for(i = 0; i<n; i++){
	    cin>>arr[i];
	}
	
	cumSum[0] = arr[0];
	
	for(i = 1; i<n; i++){
	    cumSum[i] = cumSum[i-1] + arr[i];
	}
	
	for(i = 0; i<n; i++){
	    for(j = i; j<n; j++){
	        
	        currentSum = 0;
	        currentSum = cumSum[j] - cumSum[i-1];
	        
	        if(currentSum > maxSum){
	             maxSum = currentSum;
	             left = i;
	             right = j;
	        }
	    }
	}
	
	cout<<"The maximum sum of any subarray is: "<<maxSum<<endl;
	
	for(i = left; i<=right; i++){
	    cout<<arr[i]<<" ";
	}
	
	cout<<endl<<"The length of this subarray is: "<<right + 1 - left<<endl;
	
	return 0;
}
