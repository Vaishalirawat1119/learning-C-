<<<<<<< HEAD
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

=======
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

>>>>>>> f2b0e0fe87470e2e7748c86471e2cba6faaa123c
}