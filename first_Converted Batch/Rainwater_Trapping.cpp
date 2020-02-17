/*

10
0 2 1 3 0 1 2 1 2 1

The amount of water that could be stored is equal to: 5

*/
#include <iostream>
using namespace std;

int main() {
	int towerCount, heights[100], right[100], left[100], units = 0, i;
	cin>>towerCount;
	
	for(i = 0; i<towerCount; i++){
	    cin>>heights[i];
	}
	
	//leftmost ones
	left[0] = heights[0];
	for(i = 1; i<towerCount; i++){
	    left[i] = max(left[i-1], heights[i]);
	}
	
	//rightmost ones
	right[towerCount-1] = heights[towerCount-1];
	for(i = towerCount-2; i>=0; i--){
	    right[i] = max(right[i+1], heights[i]);
	}
	
	for(i = 0; i<towerCount; i++){
	    units+= (min(left[i], right[i]) - heights[i]);
	}
	cout<<"The amount of water that could be stored is equal to: "<<units;
	return 0;
}

/*

PS: This question was a son of a bitch. Took literally an hour and half to get the code right.

*/