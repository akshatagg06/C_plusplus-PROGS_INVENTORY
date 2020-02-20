#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector <int> &arr, int n, int key){
    int s = 0, e = n-1, mid, ans = -1;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector <int> &arr, int n, int key){
    int s = 0, e = n-1, mid, ans = -1;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid + 1;
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