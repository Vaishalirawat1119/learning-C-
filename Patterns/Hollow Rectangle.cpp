<<<<<<< HEAD
#include<iostream>
using namespace std;

//* * * * *
//*       *   ----> Hollow Rectangle
//* * * * * 

int main(){
    int n=3;
    int m=5;
    

    //Outer loop
    for(int i=0; i<n; i++){
        //Stars
        if(i==0 || i==2){
            for(int j=0; j<m; j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            //spaces
            for(int i=0; i<n; i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
=======
#include<iostream>
using namespace std;

//* * * * *
//*       *   ----> Hollow Rectangle
//* * * * * 

int main(){
    int n=3;
    int m=5;
    

    //Outer loop
    for(int i=0; i<n; i++){
        //Stars
        if(i==0 || i==2){
            for(int j=0; j<m; j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            //spaces
            for(int i=0; i<n; i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
>>>>>>> f2b0e0fe87470e2e7748c86471e2cba6faaa123c
}