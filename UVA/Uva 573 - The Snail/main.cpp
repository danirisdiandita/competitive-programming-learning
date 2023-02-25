#include <iostream>
#include <cstdio> 


using namespace std; 



int main() {
    float height; 
    float climbDistance; 
    float slidingDistance; 
    float fatigueFactor; 
    int day; 
    float minimum = 0; 
    float position; 


    freopen("input.txt", "r", stdin); 

    while (scanf("%f %f %f %f", &height, &climbDistance, &slidingDistance, &fatigueFactor) != EOF) {
        if (height == 0) {
            break;
        }

        position = 0; 
        day = 0; 
        while (true) {
            day ++; 
            position += climbDistance; 
          
            if (position >= height) {
                cout << "success on day " << day << " position " << position << endl; 
                break; 
            }
            position -= slidingDistance; 
         
            if (position <= 0) {
                cout << "failure on day " << day  << " position " << position << endl; 
                break; 
            }

            climbDistance -= climbDistance * (fatigueFactor/100); 

            climbDistance = max(climbDistance, minimum); 
            

        }

       


    }

    return 0; 
}