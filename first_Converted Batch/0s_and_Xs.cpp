/*

input = 10

0 0 0 0 0 0 0 0 0 0 
0 X X X X X X X X 0 
0 X X X X X X X X 0 
0 X X X X X X X X 0 
0 X X X X X X X X 0 
0 X X X X X X X X 0 
0 X X X X X X X X 0 
0 X X X X X X X X 0 
0 X X X X X X X X 0 
0 0 0 0 0 0 0 0 0 0 

*/
#include <iostream>
using namespace std;

int main() {
	int i, k, j, n;
    cin>>n;
	
	for(i = 1; i<=n; i++){
	   if(i == 1||i==n){
	     for(j=1; j<=n; j++){
	         cout<<"0"<<" ";
	     }
	     cout<<endl;
	   }
	   
	   else{
	       cout<<"0"<<" ";
	       for(k=1; k<=n-2; k++){
	           cout<<"X"<<" ";
	       }
	       cout<<"0"<<" "<<endl;
	   }
	}
	return 0;
}
