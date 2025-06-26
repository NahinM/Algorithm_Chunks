
def selection_sort(unsorted_arr:list[int]):
    n = len(unsorted_arr)
    if n<=1: return unsorted_arr

    picked = [False]*n
    sorted_arr = [0]*n
    for i in range(n):
        mn = 1000*1000
        jj = 0
        for j in range(n):
            if unsorted_arr[j]<mn and not picked[j]:
                mn = unsorted_arr[j]
                jj = j
        picked[jj] = True
        sorted_arr[i] = mn
    return sorted_arr

unsorted_arr = [1,4,3,2]
print(selection_sort(unsorted_arr))