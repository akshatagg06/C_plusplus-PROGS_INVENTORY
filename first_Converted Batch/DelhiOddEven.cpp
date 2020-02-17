/*
Due to growing Traffic Problem Kejriwal wants to devise a new scheme. 
The scheme is as follows, each car will be allowed to run on Sunday,
if the sum of digits which are even is divisible by 4 or sum of digits
which are odd in that number is divisible by 3. 

However to check every car for the above criteria can't be done by the Delhi Police. 
You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?
*/

#include<iostream>
using namespace std;

int main() {
	int freq;
	cin>>freq;
	int last = 0, sumEven = 0, sumOdd = 0;

	for(int i = 0; i < freq; i++){
		int numPlate;
		cin>>numPlate;

        while(numPlate){
            last = numPlate % 10;
            if(last % 2 == 0){
                sumEven += last;
            }else{
                sumOdd += last;
            }
            numPlate = numPlate / 10;
        }
        //  cout<<sumOdd<<endl<<sumEven<<endl;
        if((sumOdd % 3 == 0)||(sumEven % 4 == 0)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        sumEven = 0;
        sumOdd = 0;
	}
	return 0;
}