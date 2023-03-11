//Write a function of student and grade problem.
#include<iostream>
using namespace std;
//Method 1
char findgrade(int marks){
    if(marks>=95)
       return 'A';
    else if(marks>=80)
       return 'B';
    else if(marks>=75)
       return 'C';
    else if(marks>=60)
       return 'D';
    else if(marks>=45)
       return 'E';
    else
       return 'F';
}
    


int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    
    char GradeNumber = findgrade(marks);
    cout<<GradeNumber<<endl;
    return 0;
}