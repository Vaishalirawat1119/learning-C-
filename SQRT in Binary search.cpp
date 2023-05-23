#include<iostream>
using namespace std;

int FindSQRT(int n){
    int target = n;
    int s = 0;
    int e = n;
    int mid = s+(e-s)/2;

    int ans = -1;

    while(s<=e){
        if(mid*mid == target){
            return mid;
        }
        else if(mid*mid > target){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int target = n;

    int Answer = FindSQRT(n);
    cout<<"Answer of "<<n<<" is "<<Answer<<endl;
    return 0;
}
