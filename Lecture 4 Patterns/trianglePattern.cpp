#include <iostream>
using namespace std;

int main()
{
    // Triangle pattern for stars
    // for (int i = 0; i < 5; i++)
    // { // Outer loop
    //     for (int j = 0; j < i+1; j++)
    //     { // inner loop
    //         cout << "*" << " ";
    //     };
    //     cout << endl;
    // };
    // --------------------------------

    // Triangle pattern for Numbers
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // { // Outer loop
    //     for (int j = 0; j < i+1; j++)
    //     { // inner loop
    //         cout << i+1 << " ";
    //     };
    //     cout << endl;
    // };
    // --------------------------------

    //  // Triangle pattern for incresing Numbers in row
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // { // Outer loop
    //     for (int j = 0; j < i+1; j++)
    //     { // inner loop
    //         cout << j+1 << " ";
    //     };
    //     cout << endl;
    // };
    // --------------------------------

    // // Reverse Triangle pattern for incresing Numbers in row
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // { // Outer loop
    //     for (int j = i+1; j > 0; j--)
    //     { // inner loop
    //         cout << j << " ";
    //     };
    //     cout << endl;
    // };
    // --------------------------------

    // Floyd's Triangle pattern
    // int n = 4;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // { // Outer loop
    //     for (int j = 0; j < i+1; j++)
    //     { // inner loop
    //         cout << num << " ";
    //         num ++;
    //     };
    //     cout << endl;
    // };
    // --------------------------------

    // Inverted Triangle pattern

    // int n = 4;
    // // int num = 1;
    // for (int i = 0; i < n; i++)
    // { // Outer loop

    //     // Spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // Numbers
    //     for (int j = 0; j < (n - i); j++)
    //     { // inner loop

    //         cout << (i + 1);
    //     };

    //     cout << endl;
    // };
    // --------------------------------


    // // pyramid Triangle pattern

    // int n = 4;
    // // int num = 1;
    // for (int i = 0; i < n; i++)
    // { // Outer loop
    //     //spaces 
    //     for (int k = n-i; k > 0; k--)
    //     {
    //         cout << " ";
    //     }
    //     //Numbers 
    //     for (int k=1; k<=(i+1); k++)
    //     {
    //         cout << k;
    //     }
    //     // //2nd triabgle Numbers 
    //     for (int k = i; k > 0 ; k--)
    //     {
    //         cout << k;
    //     }
    //     cout << endl;   
    // };

    // =======================================

    // Hollow Diamond Pattern 

    int n = 4;
// TOP 
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        
        // starts
        cout  << "*";

        if(i!=0){
            // spaces
            for (int j = 0; j < ((2*i)-1); j++)
        {
            cout << " ";
        }
        
            cout << "*";
        }

        cout << endl;
    }

// BOTTOM
    for (int i = 0; i < n-1; i++)
    {
        // spaces
        for (int j = 0; j < i+1; j++)
        {
            cout << " ";
        }
        
        // starts
        cout  << "*";

        if(i!=n-2){
            // spaces
            for (int j = 0; j < 2*(n-i)-5; j++)
        {
            cout << " ";
        }
        
            cout << "*";
        }

        cout << endl;
    }


    return 0;
}