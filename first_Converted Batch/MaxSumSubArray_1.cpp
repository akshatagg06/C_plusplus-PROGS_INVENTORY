/*
Input:
9
-4 1 3 -2 6 2 -8 -9 4

Output:
The maximum sum is: 10
1   5
The subarray with maximum element sum is: 
1 3 -2 6 2 
The length of the subarray is: 5

*/

#include <iostream>
using namespace std;

int main() {
	int n, a[100], k, j, i;
	
	int currSum = 0,
	    maxSum = 0,
	    left, right = -1;
	    
	cin>>n;
	
	for(i = 0; i<n; i++){
	    cin>>a[i];
	}
	
	for(i = 0; i<n; i++){
	    for(j = i; j<n; j++){
	        
	        //this is being updated for every subarray, hence reinitialise currSum = 0
	        currSum = 0;
	        
	        for(k = i; k<=j; k++){
	            currSum += a[k];
	        }
	        if(currSum > maxSum){
	            maxSum = currSum;
	            left = i;
	            right = j;
	        }
	    }
	}
	
	cout<<"The maximum sum is: "<<maxSum<<endl;
	cout<<left<<"   "<<right<<endl;
	
	cout<<"The subarray with maximum element sum is: \n";
	for(k = left; k<=right; k++){
	    cout<<a[k]<<" ";
	}
	
	cout<<endl;
	
	cout<<"The length of the subarray is: "<<right + 1 - left<<endl;
	return 0;
}