#include <cstdio>
#include <iostream> 
using namespace std; 

int main() {


    int t; 
    int dimval; 
    bool good; 
    // freopen("input.txt", "r", stdin); 

    scanf("%d", &t); 


    for (int i=0;i<t;i++) {
        good = true; 
        for (int k=0;k<3;k++) {
            
            scanf("%d", &dimval); 

            if (dimval > 20) {
                good = false; 
            }
        }

        if (good) {
            cout << "Case " << i + 1 << ": " << "good" << endl; 
        } else {
            cout << "Case " << i + 1 << ": " << "bad" << endl; 
        }
    }


    return 0; 
}