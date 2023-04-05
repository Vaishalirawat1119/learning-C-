#include<iostream>
using namespace std;

class fruit{
    
    //state or properties
    public:
    int number;
    string name;

    //Behaviour or function
    void eat(){
        cout<<"Eating"<<endl;
    }

};

int main(){


    //Object creation
    //static
    fruit obj;
    obj.number = 8;
    obj.name = "Apple";
    cout<<"Number of obj: "<<obj.number<<endl;
    cout<<"Name of obj: "<<obj.name<<endl;

    //Calling the funtion to print
    obj.eat();
    return 0;
}