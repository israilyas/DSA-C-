#include <iostream>
using namespace std;

    //======== Calculate sum of digits of a number =========

int sumOfDigit(int n)
{
    int lastDigit=0;
    int sum=0;
    while (n>0)
    {
        lastDigit = n % 10;
        // cout << lastDigit << " \n";
        n = n / 10;
        sum += lastDigit;
    }
    return sum;
}
// -------------------------------

//======== Calculate sum of N  numbers =========

int sumAllNumbers(int n){
    int sum = 0;

    for(int i = 1; i <= n ; i++){
        sum += i;
    }

    return sum;
}
// -----------------------

//  ======== Factorial of N =============

int factorial(int n){
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
            fact *= i;
    }
    
    return fact;
}

// ========== Calculate Binomial coefficients for value n and r ===========

int binomailCoefficient(int n, int r){

// nCr = n!/(r!(n-r)!)
    int nFact = factorial(n);
    int rFact = factorial(r);
    int nrDiffFact = factorial(n-r);
    int nCr;

    nCr = nFact/(rFact*nrDiffFact);

    return nCr;
}

int main()
{
    cout << sumOfDigit(535)  <<  endl;
    cout << "Sum of N numbers: " << sumAllNumbers(5) << endl;
    cout << "Factorial of N: " << factorial(4) << endl;
    cout << "Binomial corfficient for n and r: " << binomailCoefficient(8,2) << endl;

    return 0;
}

// Sum of N number
// calculate N factorial
// Calculate sum of digits of a number
//  Calculate Binomial coefficients for value n and r
