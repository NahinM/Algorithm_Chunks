import sys
sys.stdin = open("input.txt","r")

def count_and_sort(arr:list[int]):
    # find the minimum and maximum element of the array
    mn = min(arr)
    mx = max(arr)
    sorted_arr = list()
    for x in range(mn,mx+1): # count from mn upto mx number.
        for i in arr:
            if i==x: sorted_arr.append(x) # check if the number exists in the array and how many times it occured.

    return sorted_arr

arr = list(map(int,input().split()))
sorted_arr =  count_and_sort(arr)
print(sorted_arr)
