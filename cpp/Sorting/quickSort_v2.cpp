#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

void quick_sort(vi &arr, int l, int r){
    if(l>=r) return;
    
    int i=l-1,j=l, pivot = arr[r]; // selecting the most right element as pivot
    for(;j<r;++j) if(arr[j]<=pivot) swap(arr[++i],arr[j]); // gather all the elements 'less than or equal to the pivot' on the left
    swap(arr[i+1],arr[r]); // now the most right element is in its correct place and the place is i+1'th position.

    quick_sort(arr,l,i);
    quick_sort(arr,i+2,r);
}

int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    vi arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    quick_sort(arr,0,n-1);
    for(int x: arr) cout << x << ' ';
    cout << '\n';
}