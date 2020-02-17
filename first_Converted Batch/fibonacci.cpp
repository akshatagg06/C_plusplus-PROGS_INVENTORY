//Fibonnaci
#include <iostream>
using namespace std;
int main() {
    int a=0, b=1, c = a+b, n;

    cout<<"Enter the number of terms up to which you want to compute the series: ";
    cin>>n;

    cout<<"0 1 ";

    int i = 2;
    while(i<n){
        cout<<c<<" ";

        a = b;
        b = c;
        c = a+b;

        i++;
    }
}
