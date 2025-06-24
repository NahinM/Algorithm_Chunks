
def selection_sort(arr):
    n = len(arr)
    if n<=1: return arr

    for i in range(n-1):
        mn = i # at first assume that i'th index has the min element
        for j in range(i+1,n):
            if arr[j]<arr[mn]: mn = j # find if there is any element less than ours assumed one
        if i!=mn: arr[mn],arr[i] = arr[i],arr[mn] # if found than swap the elements

arr = [1,4,3,2] # unsorted array
selection_sort(arr) # sort the array in itself
print(arr)