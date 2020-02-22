/*
Given in an array of size N, all elements are present k times, such that k is a multiple of 2,
except one element that is present only once., Find this element.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, no, ans = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>no;
        ans = ans ^ no;
    }
    cout<<ans;
    return 0;
}