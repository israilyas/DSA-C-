#include <iostream>
using namespace std;

// =========== Decimal to binary conversion ========
int decToBinary(int num)
{
    int rem = 0;
    int binaryNum = 0;
    int pow = 1;

    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;

        binaryNum += rem * pow;
        pow *= 10;
    }

    return binaryNum;
}
// -----------------------

int binToDec(int num){
    int rem = 0;
    int pow = 1;
    int decNum=0;
    while (num>0)
    {
        rem = num % 10;
        num = num /10;
        cout<< "Remainder: "  << rem << endl;
        decNum += rem *pow;
        pow *= 2;
    }
    
    return decNum;
}

int main()
{

    cout << "Decimal to Binary Number is: "<< decToBinary(50)<< endl;
    cout << "Binary to Decimal Number is: "<< binToDec(110010)<< endl;

    return 0;
}

