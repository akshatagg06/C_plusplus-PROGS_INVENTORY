/*
we compare two numbers XY (Y appended at the end of X) and YX (X appended at the end of Y). 
If XY is larger, then X should come before Y in output, else Y should come before. 
For example, let X and Y be 542 and 60. To compare X and Y, we compare 54260 and 60542. 
Since 60542 is greater than 54260, we put Y first.
*/

#include<bits/stdc++.h>
using namespace std;

bool mycmp(string a,string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0 ? 1 : 0;
}

int main() {
    int times;
    cin>>times;

    while(times--){
        int n;
        cin>>n;
        
        string str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];   
        }
    
        sort(str,str+n,mycmp);
        
        for(int i=0;i<n;i++){
            cout<<str[i];
        }
        
        cout<<endl;
    }
	return 0;
}