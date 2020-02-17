#include<iostream>
using namespace std;

//typecasting
// decreasing order of prioirty of datatypes, float>int>char>boolean
int main(){
int a = 3;
char ch = 'A';

//IMPLICIT
//expected output is 68 because here the + operator typecasts the char ch as an integer, causing the two vars to get added.
cout<<(a+ch)<<endl;

int a1 = 5,b = 8;
float avg, avg2;

avg = (a1+b)/2;
avg2 = (a1+b)/2.0;
//expected output is 6 (not 6.5, even though avg is of type float) because, (a1 + b) and 2 are of type int, and int/int => int
//in avg2, int/float gives a float response
cout<<avg<<endl<<avg2<<endl;

//EXPLICIT
cout<<int(ch)<<endl<<bool(a1);
return 0;
}
