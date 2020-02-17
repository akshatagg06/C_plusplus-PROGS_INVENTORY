/*
Sample Input
aaabbccds

Sample Output
a3b2c2d1s1
*/#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin>>str;
    int len = strlen(str);
    int freq[26] = {0};

    for(int i = 0; i<len; i++){
        int counter = 1;

        while(i<len && str[i] == str[i+1]){
            counter++;
            i++;
        }

        cout<<str[i]<<counter;
    }

    return 0;
}