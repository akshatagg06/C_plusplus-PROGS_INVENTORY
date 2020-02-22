/*
 Q queries each query containing two integers a and b.
 Your task is to count the no of set-bits in for all numbers between a and b (both inclusive).
 
Sample Input 
2
1 1
10 15
Sample Output
1
17
*/
#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n&(n-1);
    }
    return count;
}
int main(){
    int q, a, b;
    cin>>q;
    while(q--){
        int total = 0;
        cin>>a>>b;
        for(int i = a; i<=b; i++){
            total += countSetBits(i);
        }
		cout<<total<<endl;
    }
    return 0;
}