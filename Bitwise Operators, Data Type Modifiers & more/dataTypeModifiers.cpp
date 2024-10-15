#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(unsigned int) << endl;
    cout << sizeof(signed int) << endl;

    // Unsignedd
    unsigned int x = -10;

    return 0;
}

// Integer => Both signed and unsigned

// Unsigned ==> number of bits remain same ==> But Range of data storage increased ==> in signed there is no msb bit which represent number is positive or negative