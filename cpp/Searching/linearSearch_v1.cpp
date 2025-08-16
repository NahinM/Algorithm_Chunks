#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

bool linear_Search(vi &arr, int x){
    for(int i:arr) if(i==x) return true;
    return false;
}

int main(){
    vi arr = {1,2,3,4,5,6,7,8,9};
    int x = 1;
    cout << (linear_Search(arr,x)?"found":"not found") << '\n';
}