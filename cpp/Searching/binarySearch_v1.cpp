#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

bool binary_search(vi & arr, int x){
    int lw = 0, hi = arr.size()-1;
    if(x<arr[lw] || arr[hi]<x) return false;
    int mid;
    while(lw<hi){
        mid = (lw+hi)>>1;
        if(mid==x) return true;
        if(x<mid) hi=mid; else lw = mid;
    }
    return false;
}

int main(){
    vi arr = {1,2,3,4,5,6,7,8,9};

    for(int x:{-2,5,15,6}) cout << (binary_search(arr,x)?"found\n":"not found\n");
}