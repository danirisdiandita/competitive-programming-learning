#include <iostream> 
#include <cstdio>
#include <string.h>

using namespace std; 

int main() {


    int T; 
    int donation; 
    int totalDonation = 0; 
    char instruction[50]; 
    // freopen("input.txt", "r", stdin); 
    scanf("%d", &T); 
    for (int i=0;i<T;i++) {
        scanf("%s", instruction); 
        if (strcmp(instruction, "donate") == 0) {
            scanf("%d", &donation); 
            totalDonation += donation; 
        } else {
            cout << totalDonation << endl;  
        }
    }

    return 0; 
}