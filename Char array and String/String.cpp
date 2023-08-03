#include<iostream>
#include<string.h>
using namespace std;

//LENGTH OF A STRING

// int getLength(char name[]){
//     int length = 0;
//     int  i = 0;

//     while(name[i] != '\0'){
//         length++;
//         i++;

//     }
//     return length;
// }

// int main(){
//     char name[100];
//     cout<<"Enter the name: ";
//     cin.getline(name,50);

//     cout<<"Length of your name is: "<<getLength(name)<<endl;
//     // string str = "Vaishali Rawat";
//     //  cout<<"Length of your name is: "<<str.size()<<endl;

//     return 0;
// }

//-----------------------------------------------------------------------------

//REVERSE A STRING

// int getLength(char name[]){
//     int length = 0;
//     int  i = 0;

//     while(name[i] != '\0'){
//         length++;
//         i++;

//     }
//     return length;
// }

// int getReverse(char name[]){
//     int i = 0;
//     int n = getLength(name);
//     int j = n-1;

//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }
// }

// int main(){
//     char name[100];
//     cout<<"Enter your name -> ";
//     cin.getline(name,50);

//     cout<<"Length is: "<<getLength(name)<<endl;

//     cout<<"Initially: "<<name<<endl;
//     getReverse(name);
//     cout<<"After reversal process: "<<name<<endl;

//     return 0;
// }

//-----------------------------------------------------------------------------
//REPLACE ALL SPACE

// void ReplaceSpaces(char sentence[]){
//     int i = 0;
//     int n = strlen(sentence);
//     for(int i=0; i<n; i++){
//         if(sentence[i] == ' '){
//             sentence[i] = '@';
//         }
//     }
// }

// int main(){
//     char sentence[100];
//     cout<<"Write the Sentence -> ";
//     cin.getline(sentence,100);

//     ReplaceSpaces(sentence);
//     cout<<"Printing sentence -> "<<sentence<<endl;
// }

//-----------------------------------------------------------------------------
//PALINDROME

// bool CheckPalindrome(char word[]){
//     int i = 0;
//     int n = strlen(word);
//     int j = n-1;

//     while(i<=j){
//         if(word[i] != word[j]){
//             return false;
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//     return true;
// }

// int main(){
//     char word[100];
//     cout<<"Enter the word -> ";
//     cin.getline(word,100);

//     cout<<"Result-> "<<CheckPalindrome(word)<<endl;

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------
