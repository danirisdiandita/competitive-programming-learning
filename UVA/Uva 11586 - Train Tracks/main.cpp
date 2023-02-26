#include <iostream>
#include <cstdio> 
#include <string> 

using namespace std; 



int main() {
    int n; 
    string pieces; 
    freopen("input.txt", "r", stdin); 
    scanf("%d", &n); 

    for (int i=0;i<n+1;i++) {
        getline (cin, pieces); 
        if (i > 0) {
            cout << pieces << endl; 
        }
      
    }

    return 0; 
}