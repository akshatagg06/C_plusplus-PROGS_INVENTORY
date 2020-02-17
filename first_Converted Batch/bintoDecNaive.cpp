//binary to decimal (naive)

#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	int temp = num;
	int last = 0, dec = 0, base = 1;
	
	while(num){
	    last = num % 10;
	    dec += last  * base;
	    num = num/10;
	    base = base*2;
	}
	cout<<dec;
	return 0;
}
