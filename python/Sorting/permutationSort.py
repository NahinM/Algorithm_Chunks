
def is_sorted(arr:list[int]):
    if len(arr)<=1: return True
    for i in range(1,len(arr)):
        if arr[i-1]>arr[i]: return False
    return True

found = False
def permutation(unsorted_arr:list[int], sorted_arr:list[int], vst:list[bool], n:int, at:int=0):
    global found
    if at==n:
        # for i in sorted_arr: print(i,end=" ")
        # print()
        if is_sorted(sorted_arr):
            found = True
        return
    
    for i in range(n):
        if found: return
        if vst[i]: continue
        vst[i] = True
        sorted_arr[at] = unsorted_arr[i]
        permutation(unsorted_arr,sorted_arr,vst,n,at+1)
        vst[i] = False

def permutation_sort(unsorted_arr:list[int]):
    global found
    n = len(unsorted_arr)
    sorted_arr = [0]*n
    vst = [False]*n
    found = False
    permutation(unsorted_arr,sorted_arr,vst,n)
    return sorted_arr
        
unsorted_arr = [4,1,2,3]
print(permutation_sort(unsorted_arr))
# print(is_sorted([2,3,4]))