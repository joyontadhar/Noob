#include <iostream>
using namespace std;
int main(void)
{
    string target = "Hello World"; 
    int n  = target.length();
    char output[n];

    for(int i = 0; i<n; i++){
        if(target[i] >= 'A' && target[i]<= 'Z'){
            for(char j = 'A'; j<='Z'; j++){
                output[i] = j;
                output[i+1] = '\0';
                cout<<output<<endl;
                if(output[i] == target[i]) break;
            }
        }
        else if(target[i] == ' '){
            output[i] = ' ';
            output[i+1] = '\0';
        }
        else{
            for(char j = 'a'; j<='z'; j++){
                output[i] = j;
                output[i+1] = '\0';
                cout<<output<<endl;
                if(output[i] == target[i]) break;
            }
        }
    }
}