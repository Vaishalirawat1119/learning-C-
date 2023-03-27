#include<iostream>
using namespace std;

//1 2 3 4 5
//1     4      
//1   3
//1 2 
//1 

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    //Outer loop
    for(int row=0; row<n; row++){
        //Inner loop
        for(int col=0; col<n; col++){
            //to prints numbers with
            if(row==0||col==0||col==n-row-1){
                cout<<col+1;
            }
            else{
                cout<<" ";     //to print spaces
            }
        }
        cout<<endl;
    }
    return 0;
}