//bitonic subarrays

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int times;
    cin>>times;

    while(times--){
        int n;
        cin>>n;

        vector<int> arr(n);
        vector<int> inc(n);
        vector<int> dec(n);


        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        
        /*
          create a inc[] array from left to right that 
          has the length of the increasing subarray,
          in arr[i], uptil that index.
        
          arr[] = [12 4 78 90 45 23]
          inc[] = [1 1 2 3 1]
          
          
          Similarly create another array dec[] from 
          right to left, that has the length of the decreasing
          subarrays, by calculating the length of increasing subarrays
          from the last index.
          
          arr[] = {12, 4, 78, 90, 45, 23} 
          dec[] is {2, 1, 1, 3, 2, 1}
        */

        inc[0] = 1;
        dec[n-1] = 1;

        for(int i = 1; i<n; i++){
            if(arr[i]>arr[i-1]){
                inc[i] = inc[i-1] + 1;
            }
            else{
                inc[i] = 1;
            }
        }

        for(int i = n-2; i>=0; i--){
            if(arr[i]>=arr[i+1]){
                dec[i] = dec[i+1] + 1;
            }
            else{
                dec[i] = 1;
            }
        }
        
        //max value of inc[i] + dec[i] - 1  is the length of the bitonic subarray

        int max = inc[0] + dec[0] - 1;
        for(int i = 1; i<n; i++){
            if(inc[i] + dec[i] - 1 > max){
                max = inc[i] + dec[i] - 1;
            }
        }

        cout<<max<<endl;
    }
}