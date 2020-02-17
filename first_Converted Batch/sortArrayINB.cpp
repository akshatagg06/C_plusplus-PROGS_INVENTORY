#include <iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main() {
	int a[] = {2,40,5,61,48,89,1,56};
	int n = sizeof(a)/sizeof(a[0]);
	
	sort(a,a+n, compare);  //by default the nature of sorting is ascending
	                       //in order to customize this, we used a comparator function.
	
	for(int i = 0; i<n; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
