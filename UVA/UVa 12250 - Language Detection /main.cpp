#include <cstdio>
#include <iostream> 
#include <string> 

using namespace std; 

int main() {

    string inputlang; 

    // freopen("input.txt", "r", stdin ); 
    for (int i = 0;i<2000;i++) {
        getline(cin, inputlang); 
        if (inputlang == "HELLO") {
            cout << "Case " << i + 1 << ": " << "ENGLISH" << endl; 
        } else if (inputlang == "HOLA") {
            cout << "Case " << i + 1 << ": " << "SPANISH" << endl; 
        } else if (inputlang == "HALLO") {
            cout << "Case " << i + 1 << ": " << "GERMAN" << endl; 
        } else if (inputlang == "BONJOUR") {
            cout << "Case " << i + 1 << ": " << "FRENCH" << endl; 
        } else if (inputlang == "CIAO" ) {
            cout << "Case " << i + 1 << ": " << "ITALIAN" << endl; 
        } else if (inputlang == "ZDRAVSTVUJTE") {
            cout << "Case " << i + 1 << ": " << "RUSSIAN" << endl;
        } else {
            cout << "Case " << i + 1 << ": " << "UNKNOWN" << endl;
        }
    }
    return 0; 
}