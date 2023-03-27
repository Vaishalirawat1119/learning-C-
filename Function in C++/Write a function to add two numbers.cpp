//Write a function to add two numbers.
#include<iostream>
using namespace std;

int Getsum (int a, int b){
    int result = a+b;
    return result;
    
}



int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    
    int b;
    cout<<"Enter the value of b: ";
    cin>>b;

    int sum = Getsum(a,b);
    cout<<sum;
    return 0;
}