<<<<<<< HEAD
#include <iostream>
#include <climits>   // For INT_MIN, INT_MAX, etc.
#include <cfloat>    // For FLT_MAX, DBL_MAX
using namespace std;

int main() {
    cout << "----- Size of Fundamental Data Types -----\n";
    cout << "Size of char: " << sizeof(char) << " byte(s)\n";
    cout << "Size of int: " << sizeof(int) << " byte(s)\n";
    cout << "Size of short: " << sizeof(short) << " byte(s)\n";
    cout << "Size of long: " << sizeof(long) << " byte(s)\n";
    cout << "Size of long long: " << sizeof(long long) << " byte(s)\n";
    cout << "Size of float: " << sizeof(float) << " byte(s)\n";
    cout << "Size of double: " << sizeof(double) << " byte(s)\n";
    cout << "Size of long double: " << sizeof(long double) << " byte(s)\n";
    cout << "Size of bool: " << sizeof(bool) << " byte(s)\n";

    cout << "\n----- Range of Signed & Unsigned Integers -----\n";
    cout << "Signed int: " << INT_MIN << " to " << INT_MAX << "\n";
    cout << "Unsigned int: 0 to " << UINT_MAX << "\n";
    cout << "Signed short: " << SHRT_MIN << " to " << SHRT_MAX << "\n";
    cout << "Unsigned short: 0 to " << USHRT_MAX << "\n";
    cout << "Signed long: " << LONG_MIN << " to " << LONG_MAX << "\n";
    cout << "Unsigned long: 0 to " << ULONG_MAX << "\n";
    cout << "Signed long long: " << LLONG_MIN << " to " << LLONG_MAX << "\n";
    cout << "Unsigned long long: 0 to " << ULLONG_MAX << "\n";

    cout << "\n----- Type Casting Demonstration -----\n";
    int a = 10;
    float b = 3.5;
    cout << "Original int a = " << a << ", float b = " << b << "\n";

    float castedFloat = (float)a;
    int castedInt = (int)b;

    cout << "Type cast int to float: " << castedFloat << "\n";
    cout << "Type cast float to int: " << castedInt << "\n";

    char ch = 'A';
    int chToInt = (int)ch;

    cout << "Char 'A' as int: " << chToInt << "\n";

return 0;
}
=======
#include <iostream>
#include <climits>   // For INT_MIN, INT_MAX, etc.
#include <cfloat>    // For FLT_MAX, DBL_MAX
using namespace std;

int main() {
    cout << "----- Size of Fundamental Data Types -----\n";
    cout << "Size of char: " << sizeof(char) << " byte(s)\n";
    cout << "Size of int: " << sizeof(int) << " byte(s)\n";
    cout << "Size of short: " << sizeof(short) << " byte(s)\n";
    cout << "Size of long: " << sizeof(long) << " byte(s)\n";
    cout << "Size of long long: " << sizeof(long long) << " byte(s)\n";
    cout << "Size of float: " << sizeof(float) << " byte(s)\n";
    cout << "Size of double: " << sizeof(double) << " byte(s)\n";
    cout << "Size of long double: " << sizeof(long double) << " byte(s)\n";
    cout << "Size of bool: " << sizeof(bool) << " byte(s)\n";

    cout << "\n----- Range of Signed & Unsigned Integers -----\n";
    cout << "Signed int: " << INT_MIN << " to " << INT_MAX << "\n";
    cout << "Unsigned int: 0 to " << UINT_MAX << "\n";
    cout << "Signed short: " << SHRT_MIN << " to " << SHRT_MAX << "\n";
    cout << "Unsigned short: 0 to " << USHRT_MAX << "\n";
    cout << "Signed long: " << LONG_MIN << " to " << LONG_MAX << "\n";
    cout << "Unsigned long: 0 to " << ULONG_MAX << "\n";
    cout << "Signed long long: " << LLONG_MIN << " to " << LLONG_MAX << "\n";
    cout << "Unsigned long long: 0 to " << ULLONG_MAX << "\n";

    cout << "\n----- Type Casting Demonstration -----\n";
    int a = 10;
    float b = 3.5;
    cout << "Original int a = " << a << ", float b = " << b << "\n";

    float castedFloat = (float)a;
    int castedInt = (int)b;

    cout << "Type cast int to float: " << castedFloat << "\n";
    cout << "Type cast float to int: " << castedInt << "\n";

    char ch = 'A';
    int chToInt = (int)ch;

    cout << "Char 'A' as int: " << chToInt << "\n";

return 0;
}
>>>>>>> ef66e833056ffe6a5fb6b548bed6c5bd224f8af8
