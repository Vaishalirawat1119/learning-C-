#include<iostream>
using namespace std;

//* * * * * *
//* * * * *
//* * * *    ----->Inverted half pyramid
//* * *
//* *
//*
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    //Outer loop
    for(int row=0; row<n; row++){
        //Inner loop
        for(int col=0; col<n-row; col++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;

}