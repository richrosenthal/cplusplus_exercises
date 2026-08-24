#include <iostream>
using namespace std;

int main() {
    int numberOfLanguages;
    cout << "Hello reader.\n";
    cout << "Welcome to C++.\n";  // Added "cout"
    
    cout << "How many programming languages do you know? ";
    cin >> numberOfLanguages;
    
    if (numberOfLanguages < 1)
        cout << "Read the preface. You may prefer\n"
        << " a more elementary book by the same author .\n";
    else
        cout << "That's great! You are a programmer.\n";
    
    return 0;
}