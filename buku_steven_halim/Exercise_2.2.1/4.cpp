

#include <bits/stdc++.h>
#include <vector>

int main()
{
    std::vector<int> arr = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int start = 2;
    int end = 7;

    int n = arr.size() / sizeof(arr[0]);

    // std::cout << n << std::endl;

    sort(arr.begin(), arr.end());

    for (auto x : arr)
    {
        if (x >= start && x <= end)
        {
            std::cout << x << std::endl;
        }
    }
}