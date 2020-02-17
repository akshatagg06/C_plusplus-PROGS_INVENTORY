#include <bits/stdc++.h>
using namespace std;

char *mystrtok(char str[], char delim[]){
    int i;
    //make a copy of the input, for str not equal to NULL.
    static char *input = NULL;
    if(str != NULL){
        input = str;
    }
    //check if the input is null
    if(input == NULL) return NULL;
    //create an output string, of the size, one more than the size of the input string.
    char *output = new char[strlen(input) + 1];
    //iterate over the string, and where input:
    for(i = 0; input[i] != '\0'; i++){
        //if not delimiter
        if(input[i] != delim[0]){
            output[i] = input[i];
        }
        //if it is a delimiter
        else{
            output[i] = '\0';
            input = input +i+1;
            return output;
        }
    }
    output[i] = '\0';
    input = NULL;
    return output;
}

int main(){
    //enter the string, that can have whitespaces
    string str;    getline(cin, str);
    //enter the delimiter
    string delimiter;    cin>>delimiter;
    //create pointer for string tokenising
    char *ptr;
    //convert the string to the pointer to the dynamic array
    ptr = mystrtok((char*)str.c_str(), (char*)delimiter.c_str());

    while(ptr != NULL){
        cout<<ptr<<endl;
        ptr = mystrtok(NULL, (char*)delimiter.c_str());
    }

    return 0;
}