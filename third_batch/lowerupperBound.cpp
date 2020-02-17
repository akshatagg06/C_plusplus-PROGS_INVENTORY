#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector <int> &arr, int n, int key){
    int s = 0, e = n-1, middle, ans = -1;
    while(s<=e){
        middle = (s+e)/2;
        if(arr[middle] == key){
            ans = middle;
            e = middle-1;
        }
        else if(arr[middle] > key){
            e = middle-1;
        }
        else{
            s = middle + 1;
        }
    }
    return ans;
}

int upperBound(vector <int> &arr, int n, int key){
    int s = 0, e = n-1, middle, ans = -1;
    while(s<=e){
        middle = (s+e)/2;
        if(arr[middle] == key){
            ans = middle;
            s = middle+1;
        }
        else if(arr[middle] > key){
            e = middle-1;
        }
        else{
            s = middle + 1;
        }
    }
    return ans;
}

int main(){
    int n, num, check[100];
    cin>>n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cin>>num;
    for(int i = 0; i<num; i++){
        cin>>check[i];
    }
    
    for(int i = 0; i<num; i++){
        cout<<lowerBound(arr, n, check[i])<<" "<<upperBound(arr, n, check[i])<<endl;
    }

    return 0;
}   