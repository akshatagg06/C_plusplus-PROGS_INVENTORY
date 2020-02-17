#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[] = "Hello C++, I am Akshat.";
    char *ptr; //make the pointer for tokenising

    ptr = strtok(str, " "); //space is the delimiter
    while(ptr != NULL){
        //first will the string element tokenised from str parameter.
        cout<<ptr<<endl;
        /*
            Now for the further successive terms in the string, null is provided as the parameter.
            NUll in the subsequent calls will give next tokens.
            repeatedly giving str as the parameter will give the same first word again and again.
        */

        /*
            When strtok is passed a static pointer is ctreated that points to the next 
            position already (after delimiter), and a dynamic array, storing this address of
            the next token is created.  
            Upon calling NULL this address is visited, but on calling str, the first index is revisted.
        */
        ptr = strtok(NULL, " ");
    }
    return 0;
}