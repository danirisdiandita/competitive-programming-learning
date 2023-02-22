#include <cstdio>
#include <iostream>
// #include <cstdlib> 

using namespace std; 



int main() {
    int n1, n2, n3, n4; 

    // freopen("input.txt", "r", stdin);
    while (scanf("%d %d %d %d", &n1, &n2, &n3, &n4) != EOF) {
        // cout << 1080 + ((n1 - n2 + 40) % 40 + (n3 - n2 + 40) % 40 + (n3 - n4 + 40) % 40) * 9 << endl; 
        cout << 360 + 360 + n1 + 360 + (n2-n1) 
    }
    return 0 ; 
}