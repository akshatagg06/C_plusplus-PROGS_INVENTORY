#include<bits/stdc++.h>
using namespace std;

int countSetBits(int num){
    int set = 0;
        while(num > 0){
            set += (num & 1);
            num = num >> 1;
        }
        return set;
}

int builtinCrap(int num){
    return __builtin_popcount(num);
}

int removeSetBits(int n){
    int times = 0;
    while(n != 0){
        times++;
        n = n & (n-1);
    }
    return times;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int num;
        cin>>num;
        cout<<countSetBits(num)<<" -- "<<removeSetBits(num)<<" -- "<<builtinCrap(num)<<endl;
    }
    cout<<"\nAll results shall be the same.";
    return 0;
}