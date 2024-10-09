#include <iostream>
using namespace std;

int main()
{
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
    // -----------------------------//

    // Triangle pattern for CHaracters
    // char ch = 'A';
    // for (int i = 0; i < 4; i++)
    // { // Outer loop
    //     for (int j = 0; j < i+1; j++)
    //     { // inner loop
    //         cout << ch << " ";
    //     };
    //     ch ++;
    //     cout << endl;
    // };

    // -------------------------------//

    // Home work ==> Butterfly Pattern

    int n = 5;

    // Top
    for (int i = 0; i < n; i++)
    {
        // left stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        if (i != n - 1)
        {
            // spaces
            for (int j = 0; j < (-2 * i) + 5; j++)
            {
                cout << " ";
            }
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

// spaces
// 0 => 5
// 1 => 3
// 2 => 1
// 3 => 0

// 2*(n-i)-5=>  2*(4-0)-5= 3 ==> not working make another fromula for wich i can get 5 when i is 0 and 3 when i =1 , 1 when i=2 and zero when i=3
