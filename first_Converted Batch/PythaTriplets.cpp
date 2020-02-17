//pythaTriplets 1.0

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	if(n==1 || n==2){
	    cout<<"-1";
	}
	
	/*
        for pythagorean triplets, 
        
        if n is even, 
            the triplets could be given by, 
             n^2/4-1, n and n^2/4+1
             so if a variable say, var = n^2/4-1, then
             
             a = var
             b = n
             c = var + 2
            
        if n is odd, 
            the triplets could be given by, 
             (n^2-1)/2, n and (n^2+1)/2
             so if a variable say, var = (n^2-1)/2, then
             
             a = var
             b = n
             c = var + 1
	*/
	
	if(n%2 == 0){
	    //for even
	    int var = (n*n)/4 - 1;
	    cout<<var<<"    "<<var+2;
	}
	
	if(n%2 != 0){
	    //for odd
	    int var = (n*n-1)/2;
	    cout<<var<<"    "<<var+1;
	}
	return 0;
}
