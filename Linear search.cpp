#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int key;
    cout<<"What is the number, Do you want to find: ";
    cin>>key;

cout<<LinearSearch(arr,n,key)<<endl;

    return 0;
}