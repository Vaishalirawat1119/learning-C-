#include<iostream>
#include<string.h>
using namespace std;

//Function of calculate the length of the string
int getLength(char name[]){
    int length = 0;
    int i = 0;
    
    while (name[i] != '\0'){
        length ++;
        i ++;
    }
    return length;
}

int main(){

    // We can write a name within 100 word limit
    char name[100];

    //Enter your name
    cout<<"Enter your name: ";

    //GETLINE function allows accepting and reading the single and multiple line strings from the input 
    cin.getline(name, 50);

    //Calling the function
    cout<<"Length is: "<<getLength(name)<<endl;

    return 0;
}