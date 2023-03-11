//Write a funtion to print counting from 1 to N.
#include<iostream>
using namespace std;

int Printcounting(int n){
    for(int i=1 ; i<=n; i++){
        cout<<i<<endl;
    }
    cout<<endl;
    return 0;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    Printcounting(n);
    return 0;
}