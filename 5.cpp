#include <iostream>
using namespace std;
int x = 1;

void showScopes() {
    int x = 2;

    cout << "Inside function (function scope): x = " << x << endl;

    if (true) {
        int x = 3; 
        cout << "Inside block (block scope): x = " << x << endl;
    }
    cout << "Back in function (function scope): x = " << x << endl;
}
int main() {
    cout << "In main (global scope): x = " << x << endl;

    showScopes();
    cout << "Back in main (global scope): x = " << x << endl;

return 0 ;
}