#include<iostream>
using namespace std;
 
int main(){
    double principal, rate, time, simpleinterest;
    
    cout<<"Enter the principal amount: ";
    cin>>principal;

    cout<<"Enter the rate of interest per period (%): ";
    cin>>rate;

    cout<<"Enter the time (in years): ";
    cin>>time;

    simpleinterest = (principal * rate * time)/100;

    cout<<"Simple Interest is: "<<simpleinterest<<endl;

    return 0;
}
