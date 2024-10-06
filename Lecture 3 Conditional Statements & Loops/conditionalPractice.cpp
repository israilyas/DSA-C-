#include <iostream>
using namespace std;

int main(){

    // Find character is lowercase or uppercase???

    char chAr;

    cout << "Enter a character: ";
    cin >> chAr;

    // if ( chAr >= 'a' && chAr <= 'z')
    // {
    //     cout << "It is lowercase letter!";
    // }
    // else
    // {
    //     cout << "It is uppercase letter!";
    // }

    // A-Z => 65-90
    // a-z => 97-
    // we can compare character with number => implicit types conversion (character is converted to its ascii value then it is comparedd with number)

    if ( chAr >= 65 && chAr <= 90)
    {
        cout << "It is uppercase letter!";
    }
    else
    {
        cout << "It is lowercase letter!";
    }

    return 0;
}