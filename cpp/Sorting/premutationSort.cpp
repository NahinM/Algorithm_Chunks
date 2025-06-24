#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vb vector<bool>

bool is_sorted(vi &arr){
    if(arr.size()<=1) return true;
    for(int i=1; i<arr.size(); i++) if(arr[i-1]>arr[i]) return false;
    return true;
}

void permutation(bool &found, vi &unsorted_arr,vi &sorted_arr, vb &vst, int n, int at=0){

    if(at==n){
        // print each permutaion of the unsorted array
        // for(int i:sorted_arr) cout << i << ' '; cout << '\n';
        if(is_sorted(sorted_arr)) found=true;
        return;
    }

    for(int i=0; i<n; i++) if(!vst[i]){
        if(found) return;
        vst[i] = true;
        sorted_arr[at] = unsorted_arr[i];
        permutation(found,unsorted_arr,sorted_arr,vst,n,at+1);
        vst[i] = false;
    }
}

vi permutation_sort(vi &unsorted_arr){
    int n = unsorted_arr.size();
    vb vst(n,false);
    vi sorted_arr(n);
    bool found = false;
    permutation(found,unsorted_arr,sorted_arr,vst,n);
    return sorted_arr;
}

int main(){
    vi unsorted_arr = {1,4,3,2};
    vi sorted_arr = permutation_sort(unsorted_arr);
    
    cout << "Sorted: "; for(int i:sorted_arr) cout << i << ' '; cout << '\n';
}