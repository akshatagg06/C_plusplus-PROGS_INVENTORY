/*
1
11
202
3003
40004
500005
6000006
70000007
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	cout<<"1"<<endl;
	
	for(int i = 1; i<n; i++){
	    cout<<i;
	    
	    for(int j =0; j<i-1; j++){
	        cout<<"0";
	    }
	    
	    cout<<i<<endl;
	}
	return 0;
}
