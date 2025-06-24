#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vb vector<bool>

vi selection_sort(vi &unsorted_arr){
    int n = unsorted_arr.size();
    if(n<=1) return unsorted_arr;
    
    vi sorted_arr(n);
    vb picked(n,false);
    for(int i=0;i<n;i++){
        int mn = __INT_MAX__;
        int jj = 0;
        for(int j=0;j<n;j++) if(unsorted_arr[j]<mn && !picked[j]) {
            mn = unsorted_arr[j];
            jj = j;
        }
        picked[jj] = true;
        sorted_arr[i] = mn;
    }
    return sorted_arr;
}

int main(){
    vi unsorted_arr = {1,4,3,2};
    vi sorted_arr = selection_sort(unsorted_arr);
    for(int i:sorted_arr) cout << i << ' ';
    cout << '\n';
}