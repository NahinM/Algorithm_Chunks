#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vb vector<bool>

void insertion_sort(vi &arr){
    if(arr.size()<=1) return;
    for(int i=1; i<arr.size(); i++)
        for(int j=i; j>0 && arr[j-1]>arr[j]; j--) swap(arr[j-1],arr[j]);
}

int main(){
    freopen("input.txt","r",stdin);
    int n{1};
    cin >> n;
    vi arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    insertion_sort(arr);
    for(int i:arr) cout << i << ' ';
    cout << '\n';
}
