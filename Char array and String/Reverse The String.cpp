#include<iostream>
#include<string.h>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;

    while(name[i] != '\0'){
        length ++;
        i ++;
    }
    return length;
}

void getReverse(char name[]){
    int i = 0;
    int n = getLength(name);
    int j = n-1;
    
    //using While Loop
    while(i<=j){
        swap(name[i], name[j]);
        i ++;
        j --;
    } 

    //using For Loop

    // for(; i<=j;){
    //     swap(name[i], name[j]);
    //     i ++;
    //     j --;
    // }
}

int main(){
    char name[100];
    cout<<"Enter the name -> ";
    cin.getline(name, 100);
 
    cout<<"Initialising: "<<name<<endl;
    cout<<"Length of name -> "<<getLength(name)<<endl;
    getReverse(name);
    cout<<"Result -> "<<name<<endl;
    return 0;
}