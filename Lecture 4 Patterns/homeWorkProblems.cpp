#include <iostream>
using namespace std;

int main(){
      // With characters
    // char ch = 'A';
    
    // for (int i = 0; i < 5; i++)
    // { // Outer loop
    //     for (char j = 0; j < 5; j++)
    //     { // inner loop
    //         cout << ch << " ";
    //         ch++; // 65 + 1
    //     };
    //     cout << endl;
    // };

    // Triangle pattern for CHaracters
    char ch = 'A';
    for (int i = 0; i < 4; i++)
    { // Outer loop
        for (int j = 0; j < i+1; j++)
        { // inner loop
            cout << ch << " ";
        };
        ch ++;
        cout << endl;
    };


    return 0;
} 


// Home work ==> Butterfly Pattern 