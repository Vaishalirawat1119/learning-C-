#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,5,7,12,45,7,4,2,1,9};
    int n = 10;
    int sum=0;
    

    for(int i=0; i<n; i++)
        sum=sum+arr[i];
    
    cout<<"The sum of the array is: "<<sum<<endl;
    return 0;
    
}