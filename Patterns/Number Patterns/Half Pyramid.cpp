#include<iostream>
using namespace std;

//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4 5 6


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n; 

    //Outer loop
    for(int row=0; row<=n; row++){
        //Inner loop
        for(int col=0; col<row; col++){
            cout<<col+1;
        }
        cout<<endl;
    }
    return 0;
}