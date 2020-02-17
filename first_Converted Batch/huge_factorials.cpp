//Factorial of huge numbers

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[10000];
    arr[0] = 1;
    int carry = 0;
    int noOfDigs = 1;
    int x;

    for(int i = 1; i<=n; i++){
        for(int j = 0; j<noOfDigs; j++){
            x = arr[j]*i + carry;
            arr[j] = x%10;
            carry = x/10;
        }

        while(carry > 0){
            arr[noOfDigs] = carry%10;
            carry = carry/10;
            noOfDigs++;
        }
    }
    for(int i = noOfDigs-1; i>=0; i--){
        cout<<arr[i];
    }
    return 0;
}