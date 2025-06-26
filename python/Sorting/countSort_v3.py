import sys
sys.stdin = open("input.txt","r")

def count_sort(arr):
    n = len(arr)
    if n<=1: return arr
    # find the minimum and the maximum from the array
    mn = min(arr)
    mx = max(arr)

    N = mx-mn+1 # find the length of the 'counting range from MIN to MAX'
    count = [0]*N
    for x in arr: count[x-mn]+=1 # count the frequency of the occurrence
    for i in range(1,N): count[i]+=count[i-1] # get the coumulative sum

    sorted_arr = [0]*n
    for x in arr:
        count[x-mn] -= 1
        ndx = count[x-mn] # find the position of the x where it should be placed
        sorted_arr[ndx] = x # place the number at the correct position
    
    return sorted_arr

arr = list(map(int,input().split()))
sorted_arr = count_sort(arr)
print(sorted_arr)