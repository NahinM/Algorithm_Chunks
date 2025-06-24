
def linear_Search(arr, x):
    for i in arr:
        if i==x: return True
    return False

arr = [1,2,3,4,5,6,7,8,9]
x = 2
print("found" if(linear_Search(arr,x)) else "not found")