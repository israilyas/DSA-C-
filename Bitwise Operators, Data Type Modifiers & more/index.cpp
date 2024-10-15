#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 8;
    
    cout << "AND: " << (a & b) << endl;
    cout << "OR: " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    cout << "Left Shift: " << a << " => " << (a << 1) << endl;
    cout << "Left Shift: " << 10 << " => " << (10 << 2) << endl;
    cout << "Right Shift: " << 10 << " => " << (10 >> 1) << endl;
    cout << "Right Shift: " << 8 << " => " << (8 >> 2) << endl;

    return 0;
}




// Miscellaneous Concepts

// Bitwise Operators 
// perform function on the binary form of numbers.
// ======== Bitwise & (AND)========
// 0.0 = 0
// 0.1 = 0
// 1.0 = 0
// 1.1 = 1
// Example , a=4 =>(100)2 , b=8 => (1000)
// 100.1000 = 0000 ==> 0 deci

// ======== Bitwise |  (OR )
// 0.0 = 0
// 0.1 = 1
// 1.0 = 1
// 1.1 = 1
// Example , a=4 =>(100)2 , b=8 => (1000)
// 100.1000 = 1100 ==> 12 deci

// Bitwise ^  (XOR)
// Same => 0
// diff => 1
// 0^0 = 0 , 1^1 = 0
// 0^1 = 1 , 1^0 = 1

// Example , a=4 =>(100)2 , b=8 => (1000)
// 0100
// 1000 
// 1100 ==> 12 deci


// 3 = 11, 7=111
// And => 011&111 => 011 => 3 deci
// OR => 011|111 => 111 => 7 deci
// XOR => 011^111 => 100 => 4 deci

//  === Bitwise << (left Shift) ===
// final answer=> a << b => A*2^b (multiply by 2 power b)


//  === Bitwise >> (Right Shift) ===
// final answer=> a << b => A/2^b (divided by 2 power b)
