/*
count sort for negative numbers also.
bit tricky sob
*/
#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
  
void countSort(vector <int> &arr, int n) 
{ 
    int max = *max_element(arr.begin(), arr.end()); 
    int min = *min_element(arr.begin(), arr.end()); 
    int range = max - min + 1; 
      
    vector<int> count(range), output(n); 
    for(int i = 0; i < n; i++) 
        count[arr[i]-min]++; 
          
    for(int i = 1; i < count.size(); i++) 
           count[i] += count[i-1]; 
    
    for(int i = n-1; i >= 0; i--) 
    {  
         output[ count[arr[i]-min] -1 ] = arr[i];  
              count[arr[i]-min]--;  
    } 
      
    for(int i=0; i < n; i++) 
            arr[i] = output[i]; 
} 
  
void printArray(vector <int> &arr, int n)  
{  
    for (int i=0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << "\n";  
} 
  
int main() 
{ 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    countSort (arr, n); 
    printArray (arr, n); 
    return 0; 
} 