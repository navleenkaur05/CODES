#include <iostream>
using namespace std;

int main() {
    int num, sum = 0,ld;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        ld= num%10;
        sum= sum + ld;
        num= num/10;

    }

    cout << "Sum of digits = " << sum;
    return 0;
}
