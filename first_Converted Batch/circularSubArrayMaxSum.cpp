/*
8
10 -3 -4 7 6 5 -4 -1

The maximum non-circular sub array sum is: 21
The maximum circular sub array sum is: 23
*/
#include <iostream>
using namespace std;

int kedane(int a[], int n);
int circularMax(int a[], int n);

int main() {
	int n; 
	cin>>n;
	
	int i, arr[100];
    for(i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"The maximum non-circular sub array sum is: "<<kedane(arr, n)<<endl;
    cout<<"The maximum circular sub array sum is: "<<circularMax(arr, n);
	return 0;
}

int kedane(int a[], int n){
    int i, tempMax = 0;
    
    int maxSum = a[0], localMax = a[0];
    for(i = 1; i<n; i++){
        localMax = a[i];
        maxSum = localMax + maxSum;
        maxSum = max(localMax, maxSum);
        tempMax = max(tempMax, maxSum);
    }
    
    return tempMax;
}

int circularMax(int a[], int n){
    int cand1 = kedane(a,n), i, cumSum = 0;
    
    for(i = 0; i<n; i++){
        cumSum += a[i];
        a[i]  = -a[i];
    }
    
    int cand2 = cumSum + kedane(a,n);
    
    int circMax = 0;
    circMax = max(cand1, cand2);
    return(circMax);
}