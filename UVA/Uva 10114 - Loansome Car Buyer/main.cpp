#include <cstdio> 
#include <iostream> 


using namespace std; 

int main () {
    int nmonths; 
    float drate; 
    int dmonth; // depreciation month 
    float payment; 
    float depRate; 
    float carprice; 
    float totalcarprice; 
    float loan; 
    int K; // depreciation time 
    float depreciationRates[100]; 
    int imonth = 0 ; // month iteration 
    freopen("input.txt", "r", stdin); 


    while (scanf("%d %f %f %d", &nmonths, &payment, &loan, &K ) != EOF) {
        if (nmonths < 0) {
            break; 
        }  
        totalcarprice = loan + payment; 
        carprice = loan + payment; 

        for (int i=0; i<K;i++) {
            scanf("%d %f", &dmonth, &drate); 
            depreciationRates[dmonth] = drate; 
       
        }


        // start depreciating 

        while (true) {
            cout << imonth << " " << carprice << " " << loan << endl; 
            loan -= payment; 
            carprice -= depreciationRates[imonth] * totalcarprice ; 
           
        
            if (imonth > 13) {
                // cout << imonth << " " << carprice << " " << loan << endl; 
                break; 
            }

            imonth ++; 

            
        }

        imonth = 0; 
        fill_n(depreciationRates, 100, 0);
        
       
    }

   
}