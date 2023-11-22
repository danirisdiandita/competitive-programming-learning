
// # Determine if S contains one or more pairs of duplicate integers
#include <iostream>
#include <set>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> uniqueAppearance;
    vector<int> array = {1, 2, 3, 4, 5, 5, 6};

    for (int i = 0; i < array.size(); i++)
    {
        auto it = uniqueAppearance.find(array[i]); 
        if (it != uniqueAppearance.end()) {
            cout << "the non unique value is: " << array[i] << endl; 
        } else {
            uniqueAppearance.insert(array[i]); 
        }

    }

    // if (*uniqueAppearance.find(2))  {
        
    // }
}