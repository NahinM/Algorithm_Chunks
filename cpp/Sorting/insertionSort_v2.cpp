#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vb vector<bool>

void insertion_sort(vi &arr){
    for(int i=1; i<arr.size(); i++)
        for(int j=i; j>0 && arr[j-1]>arr[j]; j--) swap(arr[j-1],arr[j]);
}

int main(){
    vi arr = {1,6,5,4,3,2};
    insertion_sort(arr);
    for(int i:arr) cout << i << ' ';
    cout << '\n';
}
