#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int dieRoll() {
    return rand() % 6 + 1;
}



int main() {
    srand(time(0)); // Seed the random number generator
    cout << "Rolling the die..." << endl;
    cout << "You rolled a " << dieRoll() << endl;
    return 0;
}

