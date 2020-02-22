#include<bits/stdc++.h>
using namespace std;

void funcIMade(int a, int n){
    int power = 1, check = 0, ans = 1;
    while(n > 0){
        int check = (n&1);
        if(check == 1){
            ans = ans * pow(a, power);
            power *= 2;
        }
        else{
            power *= 2;
            // continue;
        }
        n = n >> 1;
    }
    cout<<ans;
}

void betterOne(int a, int n){
    int ans = 1;
    while(n>0){
        int last_bit = (n&1);
        if(last_bit){
            ans = ans * a;
        }
        a = a*a;
        n = n>>1;
    }
    cout<<ans;
}

int main(){
    int a, n;
    cin>>a>>n;
    funcIMade(a,n);
    cout<<"  -------  ";
    betterOne(a,n);
    return 0;
}