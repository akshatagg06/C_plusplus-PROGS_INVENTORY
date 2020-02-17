#include <bits/stdc++.h>
using namespace std;

void swapFunc(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int n, vector <int> &arr){
    int i, j;
    int minValue = arr[0], minIndex;
    for(i = 0; i<n-1; i++){
        minIndex = i;
        for(j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minValue = arr[j];
                minIndex = j;
            }
        }
        swapFunc(&arr[i], &arr[minIndex]);
    }
}

int main(){
    int n;
    cin>>n; 

    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(n, arr);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}