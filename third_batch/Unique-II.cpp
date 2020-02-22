/*
We are given an array containg n numbers. 
All the numbers are present twice except for two numbers which are present only once.
Find the unique numbers in linear time without using any extra space. 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, res = 0;
    cin>>n;
    int arr[100005];

    int num;
    for(int i = 0; i<n; i++){
        cin>>num;
        arr[i] = num;
        res = res ^ num;
    }
    //res now stores the xor of the two unique entries.
    //find the index of the set bit in res.
    int temp = res;
    int pos = 0;
    while((temp&1)==0){
        pos++;
        temp = temp >> 1;
    }
    //pos stores the position of set bit.
    int mask = 1 << pos;
    //compare this position for all the entries.
    int x = 0, y = 0; //x and y are the uniques.
    for(int i = 0; i<n; i++){
        if((arr[i] & mask) > 0){
            x = x ^ arr[i];
        }
    }
    y = res ^ x;
    cout<<min(x,y)<<" "<<max(x,y);
    return 0;
}