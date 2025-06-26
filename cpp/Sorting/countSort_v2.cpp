#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>

void count_sort(vi &arr){
    if(arr.size()<=1) return;
    int MIN,MAX; MIN=MAX=arr[0];
    for(int x:arr){ // find the minimum and maximum of the array.
        MIN = min(MIN,x);
        MAX = max(MAX,x);
    }
    int N = MAX-MIN+1; // find the length of the counting range.
    vi count(N,0); // initialize a array with zeros
    for(int x: arr) ++count[x-MIN]; // count the frequency of the occurence of the numbers.

    // the following codes from the two sections bellow are equivalent.
    int at = 0;
    // section 1 ->
    // for(int i=0; i<N; i++){
    //     for(int j=0; j<count[i]; j++) arr[at++] = i+MIN;
    // }
    // end of section 1

    // section 2 ->
    int i=0;
    while(i<N){ // count from 0 to N
        if(count[i]<=0) ++i; // if we dont have any frequency here then move forword
        else{
            arr[at++] = i+MIN; // there is a frequency and lets add it to our array.
            --count[i]; // decrease the frequency
        }
    }
    // end of section 2
}

int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    vi arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    count_sort(arr);
    for(int x: arr) cout << x << ' ';
    cout << '\n';
}