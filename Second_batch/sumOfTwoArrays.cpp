/*
ARRAYS-SUM OF TWO ARRAYS

Take as input N, the size of array. Take N more inputs and store that in an array. 
Take as input M, the size of second array and take M more inputs and store that in second array. 
Write a function that returns the sum of two arrays. 
Print the value returned.
*/

#include <bits/stdc++.h>
using namespace std;

int countDigits(int num){
    return floor(log10(num) + 1);
}

int main() {
	int n, m;
	
	cin>>n;
    vector<int> arr1(n);
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    cin>>m;
    vector<int> arr2(m);
    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }
    
    int num1 = 0, num2 = 0, p = 1;
    for(int i = n-1; i>=0; i--){
        num1 = num1 + (arr1[i] * p);
        p *= 10;
    }
    // cout<<num1<<endl;
    p=1;
    for(int i = m-1; i>=0; i--){
        num2 = num2 + (arr2[i] * p);
        p *= 10;
    }
    // cout<<num2<<endl;
    
    int ans = 0;
    ans = num1 + num2; 
    // cout<<ans<<endl;
    int length = 0; 
    length = countDigits(ans);	
    // cout<<length<<endl;
    
    vector<int> arr3(length);
    
    
    for(int i  = length-1; i>=0; i--){
        if(ans > 0){
            // cout<<ans<<"  ";
            arr3[i] = ans%10;
            ans /= 10;
            // cout<<arr3[i]<<endl;
        }    
    }
    
    for(int i = 0; i<arr3.size(); i++){
        cout<<arr3[i]<<", ";
    }
    cout<<"END";
	
	return 0;
}
