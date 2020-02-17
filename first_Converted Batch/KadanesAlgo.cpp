//KEDANE'S ALGORITHM

/*
5
1 -3 2 1 -1

ans = 3
*/

#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    
    int i, arr[100];
    for(i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    //ans is the temporary variable.
    int currSum = 0, ans = 0;
    
    int maxSum = arr[0], localMax = arr[0];
    
    for(i = 1; i<n; i++){
        localMax = arr[i];
        currSum = localMax + maxSum;
        maxSum = max(localMax, currSum);
        ans = max(ans, maxSum);
    }
    
    cout<<ans;
	return 0;
}
