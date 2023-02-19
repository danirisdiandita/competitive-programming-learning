#include <cstdio>
using namespace std; 



int main() {
    int TC ,a , b = 0; 
    freopen("sample_input.txt", "r", stdin);
    scanf("%d", &TC); 
    while (TC--) {
        scanf("%d %d", &a, &b); 
        printf("%d\n", a + b ); 
    }
    return 0; 
}