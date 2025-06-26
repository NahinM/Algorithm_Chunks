#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vb vector<bool>

void selection_sort(vi &arr){
    int n = arr.size();
    if(n<=1) return;
    
    for(int i=0; i<n-1; i++){
        int mn = i; // at first assume that i'th index has the min element
        for(int j=i+1; j<n; j++) if(arr[j]<arr[mn]) mn = j; // find if there is any element less than ours assumed one
        if(i!=mn) swap(arr[i],arr[mn]); // if found than swap the elements
    }
}

int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    vi arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    selection_sort(arr); // sort the array in itself
    for(int i:arr) cout << i << ' ';
    cout << '\n';
}