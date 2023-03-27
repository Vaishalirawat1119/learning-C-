#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int start = 0;
    int end = size-1;

    while(start<=end){
        //Step 1:
        swap(arr[start], arr[end]);

        //Step 2:
        start++;

        //Step 3:
        end--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}