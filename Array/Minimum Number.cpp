#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {5,6,3,2,6,23,45,34,24,32,7,65,5,6};
    int size = 14;
    int mini = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<<"Minimum value is: "<<mini<<endl;
}