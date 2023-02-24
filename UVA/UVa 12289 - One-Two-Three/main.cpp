#include <iostream> 
#include <cstdio> 
#include <string> 

using namespace std; 

int main () {
    int t, maxerr; 
    // freopen("input.txt", "r", stdin); 
    scanf("%d", &t); 
    string numberword; 
    string one = "one"; 
    string two = "two"; 
    string three = "three"; 

    for (int i=0;i<=t;i++) {
        getline(cin, numberword);
        // scanf("%s", numberword); 


        if (i == 0 ) {
            continue;
        }
       
        maxerr = 0; 
        for (int j=0;j<numberword.length();j++) {
          
            if (numberword[j] != one[j]) {
                maxerr ++; 
            }
        }

        if (maxerr <= 1) {
            cout << 1 << endl; 
        }

        maxerr = 0; 
        for (int j=0;j<numberword.length();j++) {
           
            if (numberword[j] != two[j]) {
                maxerr ++; 
            }
        }

        if (maxerr <= 1) {
            cout << 2 << endl; 
        }

        maxerr = 0; 
        for (int j=0;j<numberword.length();j++) {
           
            if (numberword[j] != three[j]) {
                maxerr ++; 
            }
        }

        if (maxerr <= 1) {
            cout << 3 << endl; 
        }

    }


}