#include<iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char sentence[]){
    int n = strlen(sentence);

    for(int i=0; i<n; i++){
        if(sentence[i] == ' '){
            sentence[i] = '#';
        }
    }

}

int main(){
    char sentence[100];
    cout<<"Enter the sentence -> ";
    cin.getline(sentence, 100);

    cout<<"Initializing: "<<sentence<<endl;
    replaceSpaces(sentence);

    cout<<"Result: "<<sentence<<endl;

    return 0;
}