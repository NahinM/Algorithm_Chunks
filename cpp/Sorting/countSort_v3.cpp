#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

vi count_sort(vi &arr){
    int n = arr.size();
    if(n<=1) return arr;
    int MIN,MAX;
    MIN=MAX=arr[0];
    for(int x:arr){ // find the minimum and the maximum from the array
        MIN=min(MIN,x);
        MAX=max(MAX,x);
    }

    int N = MAX-MIN+1; // find the length of the 'counting range from MIN to MAX'
    vi count(N);
    for(int x:arr) ++count[x-MIN]; // count the frequency of the occurrence
    for(int i=1;i<N;i++) count[i]+=count[i-1]; // get the coumulative sum
    vi sorted_arr(n); 
    for(int x:arr){
        int ndx = --count[x-MIN]; // find the position of the x where it should be placed
        sorted_arr[ndx] = x; // place the number at the correct position
    }
    return sorted_arr;
}

int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    vi arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    vi sorted_arr = count_sort(arr);
    for(int x:sorted_arr) cout << x << ' ';
    cout << '\n';
}