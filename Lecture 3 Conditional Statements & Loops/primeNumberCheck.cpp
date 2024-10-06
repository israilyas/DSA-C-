#include <iostream>
using namespace std;

int main()
{

    // Check the number is Prime or not

    int num;

    cout << "Enter a Number: ";
    cin >> num;

    //    for (int i = 2; i <= num-1; i++)
    //    {

    //     if ( num%i == 0 )
    //     {
    //         cout << "It is non-prime number \n";
    //         break;
    //     }
    //     else if (i == num-1)
    //     {
    //         cout << "It is prime number \n";
    //         break;
    //     }

    //    }

    // by using isPrime
    bool isPrime = true;

    for (int i = 2; i <= num - 1; i++)
    {

        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "It is prime number \n";
    }
    else
    {
        cout << "It is non-prime number \n";
    }

    return 0;
}