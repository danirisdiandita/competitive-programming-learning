
#include <iostream>
#include <vector>
#include <unordered_set>


int main() {

    std::vector<int> array = {1,2,3,4,5,6,7,8,90,21, 423}; 
    std::unordered_set<int> uniquevalue; 
    bool found = false; 
    int target = 133123213; 

    for (int i=0; i<array.size();i++) {
        // std::cout << array[i] << std::endl; 
        uniquevalue.insert(array[i]); 
    }

    // check whether the value exists 

    for (int i=0; i<array.size();i++) {
        auto it = uniquevalue.find(target - array[i]); 
        if (it != uniquevalue.end()) {
            std::cout << "founds " << array[i] << " & " << target - array[i] << std::endl; 
            found = true; 
        } 
    }

    if (found == false) {
        std::cout << "No pairs found that added to" << target << std::endl; 
    }


    // go through using map 
    return 0 ; 
}