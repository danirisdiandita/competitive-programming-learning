#include <iostream>
#include <cstdio> 
#include <string> 
#include <unordered_map> 

using namespace std; 



int main() {
    int n; 
    string pieces; 
    unordered_map<string, int> cmap; // countermap
    freopen("input.txt", "r", stdin); 
    scanf("%d", &n); 

    for (int i=0;i<n;i++) {
     
        getline (cin, pieces); 
        cout << pieces << endl; 
      
    }

    return 0; 
}