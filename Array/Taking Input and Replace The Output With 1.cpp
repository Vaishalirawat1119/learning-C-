#include<iostream> 
using namespace std;

int main(){
    int arr[10];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr[i] = 1;
    }
    cout<<"Replace the ouput with the 1: ";
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}