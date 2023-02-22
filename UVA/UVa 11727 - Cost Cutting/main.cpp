#include <cstdio>
#include <iostream> 

using namespace std; 

int main () {

    int t; 
    int first, second, third; 
    int minval = 10000; 
    int maxval = 1000; 

    // freopen("input.txt", "r", stdin); 
    scanf("%d", &t); 
    for (int i=0;i<t;i++) {
        scanf("%d %d %d", &first, &second, &third); 
        minval = min(minval, first);
        minval = min(minval, second);
        minval = min(minval, third); 


        maxval = max(maxval, first); 
        maxval = max(maxval, second); 
        maxval = max(maxval, third); 

        if (first != maxval && first != minval) {
            cout << "Case " << i + 1 << ": " << first << endl; 
        } else if (second != maxval && second != minval ) {
            cout << "Case " << i + 1 << ": " << second << endl; 
        } else if (third != maxval && third != minval ) {
            cout << "Case " << i + 1 << ": " << third << endl; 
        }

        minval = 10000; 
        maxval = 1000; 
        
    } 
    return 0; 
}