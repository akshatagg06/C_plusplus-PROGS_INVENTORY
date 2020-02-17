/*
Luke Skywalker gave Chewbacca an integer number x. 
Chewbacca isn't good at numbers but he loves inverting digits in them. 
Inverting digit t means replacing it with digit 9-t.

Help Chewbacca to transform the initial number x to the minimum possible 
positive number by inverting some (possibly, zero) digits. 
The decimal representation of the final number shouldn't start with a zero.
*/
#include <iostream>
using namespace std;

int main() {
    char a[50];
    cin>>a;
    
    int i=0;
    if(a[i] == '9'){
        i++;
    }
    
    for( ; a[i]!='\0'; i++){
        int digit = a[i] - '0';
        
        if(digit >= 5){
            digit = 9 - digit;
            a[i] = digit + '0';
        }
    }
    
    cout<<a<<endl;
	return 0;
}
