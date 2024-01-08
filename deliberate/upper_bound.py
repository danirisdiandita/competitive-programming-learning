
from bisect import bisect_right

arr = [6,7,8,2,8,1,2,7,8,9]


def find_first_bigger(arr, l, r, x): 
    while l<=r: 
        mid = l + (r-l) // 2 
        if arr[mid] == x: 
            return mid 
        elif arr[mid] < x: 
            l = mid +1 
        else: 
            r = mid -1 
    return -1 
result = find_first_bigger(arr, 5, len(arr)-1, 6)
print(result)
a = bisect_right(arr, 1)
print(a)