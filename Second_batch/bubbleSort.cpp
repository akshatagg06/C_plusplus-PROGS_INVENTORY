#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int n, vector <int> &arr){
    int i,j;
    for(i = 0; i<n-1; i++){
        for(j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
	int n;
	cin>>n;
	vector <int> arr(n);
	
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	
	bubbleSort(n, arr);
	
	for(int i = 0; i<n; i++){
	    cout<<arr[i]<<endl;
	}
	
	return 0;
}
