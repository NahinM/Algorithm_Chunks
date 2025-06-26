import sys
sys.stdin = open("input.txt","r")

def count_sort(arr):
    if len(arr)<=1: return arr
    # find the minimum and maximum of the array
    mn = min(arr)
    mx = max(arr)

    N = mx-mn+1 # find the length of the counting range.
    count = [0]*N # initialize a array with zeros
    for x in arr:
        count[x-mn]+=1 # count the frequency of the occurence of the numbers.

    # the following codes from the two sections bellow are equivalent.
    at = 0
    # section 1 ->
    # for i in range(N):
    #     for _ in range(count[i]):
    #         arr[at] = i+mn
    #         at+=1
    # end of section 1
    
    # section 2 ->
    i = 0
    while i<N: # count from 0 to N
        if count[i]<=0: i+=1 # if we dont have any frequency here then move forword
        else:
            arr[at] = i+mn # there is a frequency and lets add it to our array.
            count[i]-=1 # decrease the frequency
            at+=1
    # end of section 2

    

arr = list(map(int,input().split()))
count_sort(arr)
print(arr)