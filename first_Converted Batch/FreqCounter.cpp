//frequency counter

#include <iostream>
using namespace std;

int main() {
	long long int num;
	cin>>num;
	
	int check;
	cin>>check;
	
	long long int temp = num;
	 int last = 0,
	    count = 0;
	
	while(temp){
	    last = temp % 10;
	    if(last == check){
	        count++;
	    }
	    temp = temp/10;
	}
	cout<<count;
	return 0;
}
