/*
9
-4 1 3 -2 6 2 -8 -9 4

The maximum sum is: 10

*/

#include<iostream>
using namespace std;
    
int main(){
    int n, i, currSum = 0, max = 0, arr[100];
    cin>>n;
    
    for(i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    //Kedane's A;gorithm for maximum sub array sum
    for(i = 0; i<n; i++){
        currSum += arr[i];
        
        if(currSum < 0){
            currSum = 0;
        }
        
        if(currSum > max){
            max = currSum;
        }
    }
    
    cout<<"The maximum sum is: "<<max;
    
    return 0;
}