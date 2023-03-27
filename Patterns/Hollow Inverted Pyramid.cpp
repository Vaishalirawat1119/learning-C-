#include<iostream>
using namespace std;

//* * * * *
//*     * 
//*   *
//* *
//*

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    //Outer loop
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(row==0||col==0||col== n - row - 1){    //to print stars
            cout<<"*";    
            }
            else{     //to print spaces
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;

    // cout<<"* * * * * *"<<endl;
    // cout<<"*       *"<<endl;
    // cout<<"*     *"<<endl;
    // cout<<"*   *"<<endl;
    // cout<<"* *"<<endl;
    // cout<<"*"<<endl;

    // int n=8;
     
    // //Outer loop
    // for(int i=0; i<=n; i++){
    //     //Inner loop 
    //     for(int j=0; j<=n; j++){
    //         //Conditional statement for stars
    //         if(i==0||i==7){
    //             cout<<"*";
    //         }
    //         else if(i==0||i==6){
    //             cout<<"*";
    //         }
    //         else if(i==0||i==5){
    //             cout<<"*";
    //         }
    //         else if(i==0||i==4){
    //             cout<<"*";
    //         }
    //         else if(i==0||i==3)

    //     }
    // }
}