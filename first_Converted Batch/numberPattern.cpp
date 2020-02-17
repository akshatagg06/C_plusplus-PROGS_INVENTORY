#include<iostream>
using namespace std;

int main(){
    /*
    
    1   ____1
    2   ___123
    3   __12345
    4   _1234567
    5   123456789 
    
    i REPRESENTS THE ROW NUMBER
    
    the number of spaces has to be given by (n-i)
    the number if digits printed is (2i - 1)
    followed by endl
    
    */
    
    int n;
    cin>>n;
    
    int i = 1;
    while(i<=n){
        
        int space = 1;
        while(space <= n-i){
            cout<<" ";
            space++;
        }
        
        int num = 1;
        while(num <= (2*i - 1)){
            cout<<num;
            num++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}