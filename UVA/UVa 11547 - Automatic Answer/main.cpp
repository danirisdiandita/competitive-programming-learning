#include <iostream> 
#include <cstdio>
#include <string> 

using namespace std; 

int main() {
    // freopen("input.txt", "r", stdin);
    int t; 
    int val; 
    scanf("%d", &t); 

    for (int i; i<t; i++) {
        scanf("%d", &val); 

        cout   << to_string((((((val * 567 / 9) + 7492 ) * 235) / 47 ) - 498) /10 ).back() <<  endl; 


        

        
    }
    return 0; 
}