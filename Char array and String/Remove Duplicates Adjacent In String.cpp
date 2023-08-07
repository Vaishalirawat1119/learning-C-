#include<iostream>
#include<string.h>
using namespace std;

string RemoveDupplicates(string s){
    int i = 0;
    string ans = "";

    while (i < s.length()){
        if ( ans.length() > 0 && ans[ans.length()-1] == s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        i ++;
    }
    return ans;
}

int main(){
    string s = "abbaca";
    cout<<"Original String: "<<s<<endl;
    RemoveDupplicates(s);
    cout<<"After Removing All Adjacent Duplicates in String: "<<RemoveDupplicates(s)<<endl;
    return 0;
}