// -12 Binary form and then check the binary form is correct or not by cnverting that binary form into -12

#include <iostream>
using namespace std;
#include <string>


int bin(int num){
    int rem = 0;
    int binNum = 0;
    int pow = 1;
    while (num > 0)
    {
        
        rem = num%2;
        num = num/2;

        binNum += rem*pow;
        pow*=10;
    }
    
    return binNum;
}

int twoSComp(int num){
    //  Declarations
    int length;
    // char binary = "";
    char one;
    char two;
    int count = 0;
    int flag = 0; //indicate successful conversion

    //  Convert Num to Binary
    

    cout << bin(num) << endl;
    
    return 0;
}

int main()
{
    cout << twoSComp(10) << endl;
    return 0;
}