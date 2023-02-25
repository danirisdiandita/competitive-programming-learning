#include <cstdio> 
#include <iostream> 


using namespace std; 

int main () {
    int nmonths; 
    float drate; 
    int dmonth; // depreciation month 
    float payment; 
    float downPayment; 
    float depRate; 
    float prevRate = 0; 
    float carprice; 
    float loan; 
    int K; // depreciation time 
    float depreciationRates[100] = { 0 }; 
    int imonth = 0 ; // month iteration 
    // freopen("input.txt", "r", stdin);


    while (scanf("%d %f %f %d", &nmonths, &downPayment, &loan, &K ) != EOF) {
        if (nmonths < 0) {
            break; 
        }  

        payment = loan / nmonths; 
        carprice = loan + downPayment; 

        for (int i=0; i<K;i++) {
            scanf("%d %f", &dmonth, &drate); 
            depreciationRates[dmonth] = drate; 
        }

        carprice -= depreciationRates[imonth] * carprice; 
        
        while (loan > carprice) {
            imonth ++; 
            loan -= payment; 
            if (depreciationRates[imonth] == 0.0) {
                carprice -= prevRate * carprice; 
            } else {
                carprice -= depreciationRates[imonth] * carprice; 
                prevRate = depreciationRates[imonth];
            }

        

        }

        if (imonth == 1 ) {
            cout << imonth << " month" << endl; 
        } else {
            cout << imonth << " months" << endl;
        }
    

        imonth = 0; 
        fill_n(depreciationRates, 100, 0);
        // break; 
    }

   
}