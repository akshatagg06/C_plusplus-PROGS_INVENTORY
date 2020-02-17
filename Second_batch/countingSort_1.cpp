/*
This kind of counting sort works best but only when we have positive entries to sort.
This wouldn't work for negative entries because, frequency array couln't be formed because 
there are not any negative indices, where incrementation could've been done.
*/

#include<bits/stdc++.h>
using namespace std;

vector <int> freqCounter(vector <int> &arr, int n){
    //the length of our frequency counter array would be max - min + 1
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    vector <int> freqArr(range);
    for(int i = 0; i<n; i++){
        freqArr[arr[i]]++;
    }
    return freqArr;
}

void countingSort(vector <int> &arr, int n){
    //the length of our frequency counter array would be max - min + 1
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    vector <int> freq(range);
    freq = freqCounter(arr, n);

    for(int i = 0; i<freq.size(); i++){
        for(int j = freq[i]; j>0; j--){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    countingSort(arr, n);
    return 0;
}