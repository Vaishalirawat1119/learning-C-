#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {3,5,2,1,5,3,6,8,86,4,234,56,43,234,234,16,576,86};
    int size = 18;
    int maxi = INT_MIN;

    
    for(int i=0; i<size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];

        }
        
    
    }
    cout<<"Maximum value is: "<<maxi<<endl;
    
}