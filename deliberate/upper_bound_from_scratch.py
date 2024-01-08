sorted_list = [1, 2, 2, 4, 4, 4, 6, 8, 10]
target_value = 5 

def upper_bound(arr, x, lo=0, hi=None): 
    if hi is None: 
        hi = len(arr)
    
    while lo < hi: 
        mid = (lo + hi) // 2 
        if arr[mid] <= x: 
            lo = mid + 1 
        else: 
            hi = mid 
    return lo 
def lower_bound(arr, x, lo=0, hi=None): 
    if hi is None: 
        hi = len(arr)
    while lo < hi: 
        mid = (lo + hi) // 2 
        if arr[mid] >= x: 
            hi = mid - 1 
        else: 
            lo = mid 
    return hi 
result = upper_bound(sorted_list, target_value)
print(result)