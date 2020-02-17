//find out the dual subarrays summing to a specific key.

#include <iostream>
using namespace std;

int main() {
    int n, key, arr[100];
    cin>>n;
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    cin>>key;
    
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            
            int sum = 0;
            sum = arr[i] + arr[j];
            
            if(key == sum){
                if(arr[i]<arr[j]){
                    cout<<arr[i]<<" and "<<arr[j]<<endl;
                }
                else if(arr[j]<arr[i]){
                    cout<<arr[j]<<" and "<<arr[i]<<endl;
                }
            }
        }
    }
	return 0;
}
