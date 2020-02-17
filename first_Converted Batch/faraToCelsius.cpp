#include <iostream>
using namespace std;

int main() {
	int minF, maxF, skip;
	cin>>minF>>maxF>>skip;
	int i = minF;
	
	//C = (5/9)(F – 32)
	
	while(i <= maxF){
	    int celsius = (5*(i - 32))/9;
	    cout<<i<<"  "<<celsius<<endl;
	    i = i + skip;
	}
	return 0;
}
