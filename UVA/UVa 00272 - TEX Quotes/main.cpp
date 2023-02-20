#include <cstdio>
#include <iostream> 
#include <string> 

using namespace std; 
int main() {
    bool open = true; 
    string strinput; 

    // freopen("input.txt", "r", stdin);
    while(getline(cin, strinput)) {

        int len = strinput.length(); 

        for (int i = 0; i < len ; i++) {
            if (strinput[i] == '"') {
                if (open) {
                    cout << "``"; 
                    open = !open; 
                } else {
                    cout << "''"; 
                    open = !open; 
                }


            } else {
                cout << strinput[i]; 
            }

            
        }

        cout << "" << endl; 
        // cout << strinput << endl; 
    }

    return 0; 

}