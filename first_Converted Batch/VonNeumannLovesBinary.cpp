#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	for(int i = 0; i<n; i++){
	    string bin;
	    cin>>bin;
	    
	    int count = 0;
	    
	    for(int j = 0; j<bin.length(); j++){
	        count = count + ((bin[j] - '0')*pow(2, (bin.length() - (j+1))));
	    }
	    cout<<count<<endl;
	}
	return 0;
}

//Von neumann loves binary