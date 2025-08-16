#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

bool linear_Search(vi &arr, int x){
    if(x<arr[0] || arr.back()<x) return false;
    for(int i:arr) if(i==x) return true;
    return false;
}

int main(){
    vi arr = {1,2,3,4,5,6,7,8,9};
    for(int x:{-2,5,15,6})cout << (linear_Search(arr,x)?"found":"not found") << '\n';
}