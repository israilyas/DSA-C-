#include <iostream>
using namespace std;

int main(){

    int num1,num2;

    cout << "Enter First Number: " ;
    cin >> num1;
    cout << "Enter Second Number: " ;
    cin >> num2;

    cout << "Sum = " << (num1+num2) << endl;
    cout << "Difference = " << (num1-num2) << endl;
    cout << "Product = " << (num1*num2) << endl;
    cout << "Division = " << (num1/num2) << endl;
    cout << "Modulo = " << (num1%num2) << endl;

    return 0;
}