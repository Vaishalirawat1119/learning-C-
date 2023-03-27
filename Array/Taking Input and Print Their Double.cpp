//Taking elements input in array and print their double.
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int n;
    cout<<"How many numbers you want to add in array: ";
    cin>>n;
    cout<<"Enter the input value: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing the double values of input values: ";
    for(int i=0; i<n; i++){
        cout<<2*arr[i]<<" ";
    }
    return 0;
}