/*
We are given an array containg n numbers. 
All the numbers are present thrice except for one number which is only present once. 
Find the unique number. Only use - bitwise operators, and no extra space.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, num;
    vector <int> sum(64, 0);
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>num;
        int j = 0;
        while(num>0){
            int last_bit = (num&1);
            sum[j] += last_bit;
            j++;
            num = num >> 1;
        }
    }

    for(int i = 0; i<(sum.size()-1); i++){
        sum[i] %= 3;
    }
    int ans = 0, mul = 1;
    
    for(int i = 0; i<(sum.size()-1); i++){
        ans += sum[i] * mul;
        mul *= 2;
    }
    cout<<ans;
    return 0;
}