def linear_search(arr,x):
    if x<arr[0] or arr[-1]<x: return False
    for i in arr:
        if i==x: return True
    return False

arr = [1,2,3,4,5,6,7,8,9]
for x in [-1,5,15,6]:
    print("found" if(linear_search(arr,x)) else "not found")