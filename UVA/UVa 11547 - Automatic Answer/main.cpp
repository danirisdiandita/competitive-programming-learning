
#include <iostream> 
#include <cstdio>
using namespace std; 

int main() {
    freopen("input.txt", "r", stdin);
    int t; 
    int val ; 


    scanf("%d", &t); 


    for (int i; i<t; i++) {
        scanf("%d", &val); 
        // cout << val << endl; 

        cout << ((((val * 567 / 9) + 7492 ) * 235) / 47 ) - 498 << endl; 
    }
    return 0; 
}