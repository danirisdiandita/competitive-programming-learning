#include <cstdio>
#include <iostream> 

using namespace std; 

int main() {


    int nParticipant; 
    int budget; 
    int nHotel; 
    int nWeeks; 
    int hotelPrice; 
    int nAvailableBeds; 
    int minCost = 500001; 

    // freopen("input.txt", "r", stdin); 

    while (scanf("%d %d %d %d", &nParticipant, &budget, &nHotel, &nWeeks ) != EOF) {
        for (int i=0;i<nHotel;i++) {
            scanf("%d", &hotelPrice ); 
            for (int k=0;k<nWeeks;k++) {
                scanf("%d", &nAvailableBeds); 
                if (nAvailableBeds >= nParticipant && (nParticipant * hotelPrice) < budget) {
                    minCost = min(minCost, nParticipant * hotelPrice); 
                }
            }
        }

        if (minCost > 500000) {
            cout << "stay home" << endl; 
        } else {
            cout << minCost << endl; 
        }

        minCost = 500001; 
    }



    return 0; 
}