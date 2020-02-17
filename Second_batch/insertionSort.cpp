#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector <int> &arr){
    int i, j;
    for(i = 1; i<n; i++){
        int curr = arr[i];
        j = i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = curr;
    }
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    insertionSort(n, arr);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}