#include <cstdio> 
#include <iostream> 

using namespace std; 

int main() {


    int N; 
    int val; 
    int counter; 
    bool add; 
    int caseidx = 0; 

    // freopen("input.txt", "r", stdin); 

    while (scanf("%d", &N) != EOF) {
        counter = 0;
        add = false;   
        for (int i=0; i < N;i++) {
            add = true; 
            scanf("%d", &val); 


            if (val > 0) {
                counter++; 
            } else {
                counter--; 
            }
        }

        if (add) {
            cout << "Case " <<  caseidx + 1 << ": " << counter << endl; 
            caseidx++; 
        }

    
    }



    return 0; 
}