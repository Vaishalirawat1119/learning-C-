#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    int element, position;
    
    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter "<<size<<" elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the element which you want to insert in an array: ";
    cin>>element;

    cout<<"Enter the position where you want to insert that element: ";
    cin>>position;

    if(position < 0 || position > size){
        cout<<"Invalid position!!"<<endl;
    }
    else{
        // Shift all elements one place right from the specified index.
        for(int j = size - 1; j >= position; j--){
            arr[j+1] = arr[j];
        }

        arr[position] = element;

        size++;

        cout << "Updated Array:" << std::endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}