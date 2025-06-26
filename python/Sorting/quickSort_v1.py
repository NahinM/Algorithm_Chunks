import sys
sys.stdin = open("input.txt","r")

def quick_sort(arr):
    n = len(arr)
    if n<=1: return

    mid = n>>1
    mid_elm = arr[mid]
    left = list()
    right = list()
    for i in range(n):
        if i==mid: continue
        left.append(arr[i]) if(arr[i]<=mid_elm) else right.append(arr[i])
    
    quick_sort(left)
    quick_sort(right)

    i = 0
    for x in left:
        arr[i] = x
        i+=1
    arr[i] = mid_elm
    i+=1
    for x in right:
        arr[i] = x
        i+=1

arr = list(map(int,input().split()))
quick_sort(arr)
print(arr)