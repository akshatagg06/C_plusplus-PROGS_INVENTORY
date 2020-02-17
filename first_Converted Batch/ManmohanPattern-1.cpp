/*
1
11
111
1001
11111
100001
1111111
10000001
*/

#include <iostream>
using namespace std;

int main() {
	//take the number of rows
	int n, i, j;
	cin >>n;
	//start the looping through each row
	//if i%2 = 0, then set all the entries as 1s
	//else 1, followed by 0s and then again 1.
	
	for(i = 1; i<=n; i++){
	    if(i%2 == 1){
	        for(j = 1; j<=i; j++){
	            cout<<"1";
	        }
	    }else{
	        cout<<"1";
	        for(j = 1; j<=(i-2); j++){
	            cout<<"0";
	        }cout<<"1";
	    }
	    cout<<endl;
	}
	return 0;
}
