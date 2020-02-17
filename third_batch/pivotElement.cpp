#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int s = 0, e = n-1, mid;
    while(s<=e){
        mid = (s+e)/2;
        if(a[mid] > a[mid+1] && mid<e){
            cout<<mid;
            break;
        }
        if(a[mid] < a[mid-1] && mid>s){
            cout<< mid-1;
            break;
        }
        if(a[e] <= a[mid]){
            s = mid+1;
        }
        else if(a[s] >= a[mid]){
            e = mid-1;
        }
    }
    if(s>e){
        cout<<"-1";
    }
    return 0;
}