#include <iostream>
using namespace std;
#include <cmath>

// Figure out how to find if a number is power of 2 without any loop;
bool powerOfTwo(int n)
{

    if (n > 0 && (n & (n-1))==0)
    {
        cout << n << " is a power of two." << endl;
        return true;
    }
    else
    {
        cout << n << " is not a power of two." << endl;
        return false;
    }
};

// write a function to reverse an integer n.

int reverseNum(int n)
{
    int rem = 0;
    int revNum = 0;
    int pow = 10;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;

        revNum = (revNum * pow) + rem;
    }

    return revNum;
}

int main()
{

    // cout << "Reverse of 145: " << reverseNum(145) << endl;
    // cout << "Reverse of 14876: " << reverseNum(14876) << endl;
    // cout << "Reverse of 55443322: " << reverseNum(55443322) << endl;

    cout << powerOfTwo(122) << endl;
    cout <<  powerOfTwo(144) << endl;
    cout <<  powerOfTwo(1135) << endl;
    cout <<  powerOfTwo(16) << endl;
    cout <<  powerOfTwo(4) << endl;
    cout <<  powerOfTwo(1) << endl;
    cout <<  powerOfTwo(2) << endl;
    cout <<  powerOfTwo(8) << endl;
    cout <<  powerOfTwo(36) << endl;
    cout <<  powerOfTwo(32) << endl;

    // ------------------------------------------------
    // ====== Bitwise Operators =======
    // 6 & 10
    // 6 =>  110 & 10=>1010 === 0010 == 2 decimal
    // cout << (6 & 10) << endl;
    // 6 | 10
    // 6 =>  110 & 10=>1010 === 1110 == 14  deci
    // cout << (6 | 10) << endl;
    // 6 ^ 10
    // 6 =>  0110 & 10=>1010 === 1100 == 12 deci
    // cout << (6 ^ 10) << endl;

    // Left Shift
    // 10<<2
    // 10 => 1010 << 101000 => 32+8 = 40
    // 10*2^2 =>10*4=>40
    // cout << (10 << 2) << endl;
    // Right Shift
    // 10>>1
    // 10 => 1010 << 101=>  5 deci
    // 10/2^1 =>10/2=>5
    // cout << (10 >> 1) << endl;

    return 0;
}

// Figure out how to find if a number is power of 2 without any loop;

// write a function to reverse an integer n.