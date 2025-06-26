
def insert_into(sorted_arr:list[int], at:int, x:int):
    sorted_arr[at] = x
    while at>0 and sorted_arr[at-1]>sorted_arr[at]:
        sorted_arr[at-1],sorted_arr[at] = sorted_arr[at],sorted_arr[at-1]
        at-=1


def insertion_sort(unsorted_arr:list[int]):
    n = len(unsorted_arr)
    if n<=1: return unsorted_arr
    
    sorted_arr = [0]*n
    for i in range(n):
        insert_into(sorted_arr,i,unsorted_arr[i])
    
    return sorted_arr

unsorted_arr = [1,6,5,4,3,2]
sorted_arr = insertion_sort(unsorted_arr)
print(sorted_arr)