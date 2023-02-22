#include <cstdio>
#include <iostream>


using namespace std; 




int main() {



    // freopen("input.txt", "r", stdin); 


    int t;
    int n; 
    int pos; 
    int minpos; 
    int maxpos; 

    scanf("%d", &t); 


    // loop for case 
    for (int i = 0; i < t; i++ ) {
        // loop for scan 
        scanf("%d", &n); 
        minpos = 99; 
        maxpos = 0; 

        for (int j =0; j < n; j++) {
            scanf("%d", &pos); 

            // cout << pos << " ";
            minpos = min(minpos, pos); 
            maxpos = max(maxpos, pos);  
        }

        cout << 2 * (maxpos - minpos) << endl; 
        

        
    }


    return 0; 
}