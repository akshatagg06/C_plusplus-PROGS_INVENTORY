//count the set bits

#include <iostream>
using namespace std;

int main() {
	//get the number
	int num;
	cin>>num;
	
	int counter = 0;
	//make a loop that ands the number with 1, and it is updated with every iteration such that
	//the number is right shifted.
	
	/*  000001010
	   &000000001....will give back 0, and this is added to a counter. 
	    
	    then right shifted
	    
	    000000101
	   &000000001.....will give back 1, which will be added to the counter, thus counter = 1.
	   
	   similarly, counter = 2, at then end.
	   
	   counter = counter + (num & 1)
	*/
	
	while(num>0){
	    //update counter
	    counter = counter + (num&1);
	    
	    //update iteration
	    num = num>>1;
	}
	cout<<counter;
	return 0;
}
