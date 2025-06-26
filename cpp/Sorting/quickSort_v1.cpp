#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

void quick_sort(vi &arr){
    int n = arr.size();
    if(n<=1) return;

    vi left,right;
    int mid = n>>1;
    int mid_elm=arr[mid];

    for(int i=0; i<n; ++i){
        if(i==mid) continue;
        arr[i]<=mid_elm?left.push_back(arr[i]):right.push_back(arr[i]);
    }
    quick_sort(left);
    quick_sort(right);

    int i=0;
    for(int x:left) arr[i++] = x;
    arr[i++] = mid_elm;
    for(int x:right) arr[i++] = x;
}

int main(){
    vi arr = {2,4,6,8,7,3,9,1,5,4,9,2,4,0,1,3,5};
    quick_sort(arr);
    for(int x: arr) cout << x << ' ';
    cout << '\n';
}