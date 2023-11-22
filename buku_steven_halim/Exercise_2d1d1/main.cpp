
// # Determine if S contains one or more pairs of duplicate integers
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    set<int> uniqueAppearance;
    vector<int> array = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < array.size(); i++)
    {
        cout << uniqueAppearance.find(array[i]) << endl; 
    }
}