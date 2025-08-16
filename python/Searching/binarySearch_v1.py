def bianey_search(arr,x):
    lw,hi = 0,len(arr)-1
    if x<arr[lw] or arr[hi]<x: return False
    mid = (lw+hi)>>1

    while lw<hi:
        if mid==x: return True
        (lw := mid) if x>mid else (hi := mid)
        mid = (lw+hi)>>1

arr = [1,2,3,4,5,6,7,8,9]
for x in [-1,5,15,6]:
    print("found" if(bianey_search(arr,x)) else "not found")