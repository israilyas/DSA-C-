#include <iostream>
using namespace std;

int main()
{
    // ======== Squre Paterns ========


    // With number N
    // int n = 5;

    //     for (int i = 1; i <= n; i++)
    //     { // Outer loop
    //         for (int j = 1; j <= n; j++)
    //         { // inner loop
    //             cout << j << " ";
    //         };
    //         cout << endl;
    //     };

    // With CHaracter

    // for (int i = 1; i <= 5; i++)
    // { // Outer loop
    //     for (char j = 'A'; j <= 'F'; j++)
    //     { // inner loop
    //         cout << j << " ";
    //     };
    //     cout << endl;
    // };

    //==== OR ====

    // for (int i = 0; i < 5; i++)
    // { // Outer loop
    //     char ch = 'A';
    //     for (char j = 0; j < 5; j++)
    //     { // inner loop
    //         cout << ch << " ";
    //         ch++; // 65 + 1
    //     };
    //     cout << endl;
    // };

    // Numbers pattern

    // int n = 4;
    // int number = 1;

    // for (int i = 1; i <= n; i++)
    // { // Outer loop
    //     for (int j = 1; j <= n; j++)
    //     { // inner loop
    //         cout << number << " ";
    //         number ++;
    //     };
    //     cout << endl;
    // };

// ======== Squre Paterns ========

    return 0;
}

// outer loop ===>  rows / no. of lines
// inner loop ===>  columns / items in one row(what we have to print in a single row)
// if we want that a number will not reset after inner loop then we have to declare it before outer loop