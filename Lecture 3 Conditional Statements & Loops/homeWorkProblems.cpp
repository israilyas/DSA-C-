#include <iostream>
using namespace std;

int main()
{
// Q: Sum of all numbers from 1 to N which are divisible by 3.
    int n;
    int sum = 0;;

    cout <<  "Input Number: ";
    cin >>  n;

    for (int i = 1; i <= n; i++)
    {
        if (i%3 == 0)
        {
            sum += i;
            cout ;
            cout << " " << i;
        }
    }

    cout << "\nSum = " << sum ;

    // Q2: Print Factorial of a number N.

    int num;
    int factorial = 1;

    cout << "Input Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    cout << "Factorial is: " << factorial;
    
    return 0;
} 




