/*
 Question is :

Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.


*/

#include<iostream>
using namespace std;

int main() {
    int N1, N2;
    cin>>N1>>N2;
    int i = 1;
    int counter = 0;

    while(counter< N1){
        if((3*i + 2)% N2 != 0){
            cout<<(3*i + 2)<<endl;
            counter++;
        }
        i++;
    }
	return 0;
}