#include <cstdio>

int main() {
    int a, b ; 
    freopen("sample_input2.txt", "r", stdin);
    while (scanf("%d %d", &a, &b), (a || b)) {
        printf("%d\n", a + b ); 
    }
    return 0; 
}