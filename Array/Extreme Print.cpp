#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,7,2,1,9,5,9,7};
    int size = 8;
    int start = 0;
    int end = size-1;

    while(true){
        if(start > end){
            break;
        }
        else if(start == end){
            cout<<arr[end]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    return 0;
}