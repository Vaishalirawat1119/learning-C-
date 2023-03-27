//Write a function to find factorial.
#include<iostream>
using namespace std;


int Findfactorial(int n){
    if(n == 0 || n == 1){
       
        return n*Findfactorial(n-1);
    }
     return 1;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    //Function calling
    int fact = Findfactorial(num);
    cout<<"The factorial of "<<num<<" is "<<Findfactorial<<endl;
    return 0;
}

