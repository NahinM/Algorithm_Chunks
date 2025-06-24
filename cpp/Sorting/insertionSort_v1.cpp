#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vb vector<bool>

void insert_into(vi &sorted_arr,int at, int x){
    sorted_arr[at] = x; // lest's first place is at the end of all the inserted elements
    for(; at>0 && sorted_arr[at]<sorted_arr[at-1]; at--) swap(sorted_arr[at],sorted_arr[at-1]); // shft the element x at the correct position
}

vi insertion_sort(vi &unsorted_arr){
    int n = unsorted_arr.size();
    if(n<=1) return unsorted_arr;

    vi sorted_arr(n);
    for(int i=0; i<n; i++) insert_into(sorted_arr, i, unsorted_arr[i]); // insert the i'th element into the correct position of sorted array
    return sorted_arr;
}

int main(){
    vi unsorted_arr = {1,6,5,4,3,2};
    vi sorted_arr = insertion_sort(unsorted_arr);
    for(int i:sorted_arr) cout << i << ' ';
    cout << '\n';
}