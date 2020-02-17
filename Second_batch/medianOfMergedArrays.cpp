/*
1) Calculate the medians m1 and m2 of the input arrays ar1[] 
   and ar2[] respectively.
2) If m1 and m2 both are equal then we are done.
     return m1 (or m2)
3) If m1 is greater than m2, then median is present in one 
   of the below two subarrays.
    a)  From first element of ar1 to m1 (ar1[0...|_n/2_|])
    b)  From m2 to last element of ar2  (ar2[|_n/2_|...n-1])
4) If m2 is greater than m1, then median is present in one    
   of the below two subarrays.
   a)  From m1 to last element of ar1  (ar1[|_n/2_|...n-1])
   b)  From first element of ar2 to m2 (ar2[0...|_n/2_|])
5) Repeat the above process until size of both the subarrays 
   becomes 2.
6) If size of the two arrays is 2 then use below formula to get 
  the median.
    Median = (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1]))/2
*/

/*
two sorted arrays, 
merge them, sort them, 
now find the median of the merged array.
*/

#include <iostream>
using namespace std;

int medianCalculator(int a[], int n){
    if(n%2 == 0){
        return (a[n/2] + a[n/2 - 1])/2;
    }
    return a[n/2];
}

int median(int arr1[], int arr2[], int n){
    if(n==0){
        return -1;
    }
    
    else if(n==1){
        return (arr1[0] + arr2[0])/2;
    }
    
    else if(n == 2){
        return (max(arr1[0], arr2[0]) + min(arr1[1], arr2[1]))/2;
    }
    
    int m1 = medianCalculator(arr1, n);
    int m2 = medianCalculator(arr2, n);
    
    if(m1 == m2)
    return m1;
    
    //recursive
    else if (m1 < m2){ 
        if (n % 2 == 0){
            return median(arr1 + n / 2 - 1, arr2, n - n / 2 + 1);
        }
            return median(arr1 + n / 2, arr2, n - n / 2); 
    }   
    
    else if(m1 > m2){
    if (n % 2 == 0){
        return median(arr2 + n / 2 - 1, arr1, n - n / 2 + 1);
    }
        return median(arr2 + n / 2, arr1, n - n / 2); 
    } 
}

int main() {
	int n;
	cin>>n;
	
	int arr1[1000], arr2[1000];
	
	for(int i = 0; i<n; i++){
	    cin>>arr1[i];
	}
	for(int i = 0; i<n; i++){
	    cin>>arr2[i];
	}
	
	cout<<median(arr1, arr2, n);
	return 0;
}
