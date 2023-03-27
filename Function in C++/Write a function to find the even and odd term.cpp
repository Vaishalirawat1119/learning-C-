<<<<<<< HEAD
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
=======
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
>>>>>>> f2b0e0fe87470e2e7748c86471e2cba6faaa123c
}