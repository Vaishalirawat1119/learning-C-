#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size, position;
    
    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter "<<size<<" elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the position to delete: ";
    cin>>position;

    if(position < 0 || position >= size){
        cout<<"Invalid position!!"<<endl;
    }
    else{
        for(int j = position; j < size - 1; j++){
            arr[j+1] = arr[j];
        }

        size--;

        cout << "Updated Array:" << std::endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}