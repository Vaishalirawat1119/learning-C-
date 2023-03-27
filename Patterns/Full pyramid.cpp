<<<<<<< HEAD
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    //Outer loop
    for(int row=0; row<n; row++){

        //Inner loop
        //For spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";

        }
        //For stars
        for(int col=0; col<row+1; col++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
=======
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    //Outer loop
    for(int row=0; row<n; row++){

        //Inner loop
        //For spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";

        }
        //For stars
        for(int col=0; col<row+1; col++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
>>>>>>> f2b0e0fe87470e2e7748c86471e2cba6faaa123c
}