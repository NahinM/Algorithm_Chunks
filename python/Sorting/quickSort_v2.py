import sys
sys.stdin = open("input.txt","r")

def quick_sort(arr,l,r):
    if l>=r: return

    i,j,pivot = (l-1,l,arr[r]) # selecting the most right element as pivot
    while j<r:
        if arr[j]<=pivot: # gather all the elements less than or equal to the pivot on the left
            i+=1
            arr[i],arr[j] = arr[j],arr[i]
        j+=1
    arr[r],arr[i+1] = arr[i+1],arr[r] # now the most right element is in its correct place and the place is i+1'th position.

    quick_sort(arr,l,i)
    quick_sort(arr,i+2,r)

arr = list(map(int,input().split()))
quick_sort(arr,0,len(arr)-1)
print(arr)