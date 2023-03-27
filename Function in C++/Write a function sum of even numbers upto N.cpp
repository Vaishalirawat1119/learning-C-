<<<<<<< HEAD
//Write a function sum of even numbers upto N.
#include<iostream>
using namespace std;
//Sum of all numbers.
// int GetSum(int n){
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum = sum+i;
//     }
//     return sum;
// }

//Add all the even numbers upto N.
int GetEvenSum(int n){
    int sum=0;
    for(int i=2; i<=n; i+=2){
        sum = sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = GetEvenSum(n);
    cout<<"Even sum is "<<ans<<"."<<endl;
    return 0;
=======
//Write a function sum of even numbers upto N.
#include<iostream>
using namespace std;
//Sum of all numbers.
// int GetSum(int n){
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum = sum+i;
//     }
//     return sum;
// }

//Add all the even numbers upto N.
int GetEvenSum(int n){
    int sum=0;
    for(int i=2; i<=n; i+=2){
        sum = sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = GetEvenSum(n);
    cout<<"Even sum is "<<ans<<"."<<endl;
    return 0;
>>>>>>> f2b0e0fe87470e2e7748c86471e2cba6faaa123c
}