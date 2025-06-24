
def insertion_sort(arr):
    n = len(arr)
    if n<=1: return
    for i in range(1,n):
        for j in range(i,1,-1):
            if arr[j-1]<arr[j]: break
            arr[j-1],arr[j]=arr[j],arr[j-1]

arr = [1,6,5,4,3,2]
insertion_sort(arr)
print(arr)