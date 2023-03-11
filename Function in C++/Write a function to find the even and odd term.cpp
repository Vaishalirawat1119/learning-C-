//Write a function to find the even and odd term.
#include<iostream>
using namespace std;

int getEvenOdd (int a){
    if(a%2==0){
        cout<<a<<" is an Even number."<<endl;
    }
    else{
        cout<<a<<" is an Odd number."<<endl;
    }
    return 0;
}

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int find = getEvenOdd(a);
    cout<<find<<endl;
    return 0;
}