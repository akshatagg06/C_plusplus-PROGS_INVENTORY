#include<bits/stdc++.h>
using namespace std;

int binarySearcher(int n, vector <int> &arr, int key){
    int s = 0,
        e = n-1, mid;
    
    while(s<=e){
        mid = (s+e)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key>arr[mid])
            s = mid+1;
        else if(key < arr[mid])
            e = mid - 1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearcher(n, arr, key);
    return 0;
}