#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

vi count_and_sort(vi &arr){
    if(arr.size()<=1) return arr;
    int mn,mx; mn = mx = arr[0];
    vi sorted_arr;
    for(int x: arr) { // find the minimum and maximum element of the array
        mn = min(mn,x);
        mx = max(mx,x);
    }
    for(int counting=mn; counting<=mx; counting++){ // count from mn upto mx number.
        for(int x: arr) if(x==counting) sorted_arr.push_back(x); // check if the number exists in the array and how many times it occured.
    }
    return sorted_arr;
}

int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    vi arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    vi sorted_arr = count_and_sort(arr);
    for(int x: sorted_arr) cout << x << ' ';
    cout << '\n';
}