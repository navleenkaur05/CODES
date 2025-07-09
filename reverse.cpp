#include <iostream>
using namespace std;

int main() {
    int num, r= 0,ld;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        ld= num%10;
        r= r*10 + ld;
        num= num/10;

    }

    cout << "reverse of digits = " << r;
    return 0;
}
