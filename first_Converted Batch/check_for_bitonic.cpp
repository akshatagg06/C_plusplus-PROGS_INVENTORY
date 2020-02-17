#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check if the given array is bitonic 
int checkBitonic(int arr[], int n) 
{ 
    int i, j; 
  
    // Check for increasing sequence 
    for (i = 1; i < n; i++) { 
        if (arr[i] > arr[i - 1]) 
            continue; 
  
        if (arr[i] <= arr[i - 1]) 
            break; 
    } 
  
    if (i == n) 
        return 1; 
  
    // Check for decreasing sequence 
    for (j = i + 1; j < n; j++) { 
        if (arr[j] < arr[j - 1]) 
            continue; 
  
        if (arr[j] >= arr[j - 1]) 
            break; 
    } 
  
    i = j; 
  
    if (i != n) 
        return 0; 
  
    return 1; 
} 
  

int main() 
{ 
    int arr[] = {12,13,14,20,19,5,1}; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    (checkBitonic(arr, n) == 1) ? cout << "YES"
                                : cout << "NO"; 
  
    return 0; 
} 