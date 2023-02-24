#include <iostream> 
#include <cstdio>
#include <string.h>


using namespace std; 

int main() {



    char line[20]; 
    int i = 0;


    // freopen("input.txt", "r", stdin); 
    while (scanf("%s", line)) {
        if (strcmp(line, "*") == 0) {
            break; 
        }


        if (strcmp(line, "Hajj") == 0) {
            cout << "Case " << i+1 << ": " << "Hajj-e-Akbar" << endl; 
        } else if (strcmp(line, "Umrah") == 0) {
            cout << "Case " << i+1 << ": " << "Hajj-e-Asghar" << endl; 
        }


        i ++; 
    }

    return 0; 


}