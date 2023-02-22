#include <cstdio> 
#include <iostream> 


using namespace std; 


int main() {


    int K, N, M, X, Y; 

    // freopen("input.txt", "r", stdin); 

    while (scanf("%d", &K) != EOF) {
        scanf("%d %d", &N, &M); 

        for (int i=0; i < K; i++) {
            scanf("%d %d", &X, &Y); 
            // cout << X << Y << endl; 

            if (X == N || Y == M) {
                cout << "divisa" << endl; 
            } else if (X > N && Y > M)  {
                cout << "NE" << endl; 
            } else if (X > N && Y < M) {
                cout << "SE" << endl; 
            } else if (X < N && Y < M) {
                cout << "SO" << endl; 
            } else {
                cout << "NO" << endl; 
            }
        }
    }


    return 0; 
}