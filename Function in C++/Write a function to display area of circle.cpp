//Write a function to display area of circle.
#include<iostream>
const double PI = 3.14;
using namespace std;

float Findarea (float r){
    return (PI * r * r);

}

int main(){
    float r, Area;
    cout<<"Enter the value of r: ";
    cin>>r;

    //Function calling
    Area = Findarea (r);
    cout<<"The area of circle is "<<Area;
    return 0;

}