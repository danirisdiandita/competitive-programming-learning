// using two pointers for sorted array

#include <vector>
#include <bits/stdc++.h>

int main()
{
    int l, r;
    std::vector<int> arr = {1, 4, 45, 6, 10, -8};
    int target = 16;
    sort(arr.begin(), arr.end());

    l = 0;
    r = arr.size() - 1;

    while (l < r)
    {
        if (arr[l] + arr[r] == target) {
            std::cout << "Yes"; 
            break; 
        } else if (arr[l] + arr[r] > target) {
            r--; 
        } else {
            l++; 
        }
    }

    return 0; 
}