<<<<<<< HEAD
//Write a function to find max of 3 numbers.
#include<iostream>
using namespace std;

int Getmax (int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b: ";
    cin>>b;

    int c;
    cout<<"Enter the value of c: ";
    cin>>c;

    int max = Getmax (a,b,c);
    cout<<max<<endl;
    return 0;
=======
//Write a function to find max of 3 numbers.
#include<iostream>
using namespace std;

int Getmax (int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b: ";
    cin>>b;

    int c;
    cout<<"Enter the value of c: ";
    cin>>c;

    int max = Getmax (a,b,c);
    cout<<max<<endl;
    return 0;
>>>>>>> f2b0e0fe87470e2e7748c86471e2cba6faaa123c
}