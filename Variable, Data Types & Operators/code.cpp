#include <iostream>
using namespace std;

int main(){
    // === cout ===> output
    cout << "Hello World";
    cout << "Hello World" <<endl;
    cout << "Hello World \nFrom ISRA ILYAS\n";
    cout << "ISRA\nILYAS";

    // cin ==> input
    int userInput ;
    cout << "Enter Your Age: ";
    cin >> userInput ;
    cout <<"Your age is: " << userInput << endl;

    // === DATATYPES ===

    int age = 30;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = false;
    double price = 100.99;
    int value = grade;

    cout << value << endl;
    cout << age << endl;
    cout << PI << endl;
    cout << isSafe << endl;
    cout << price << endl;
    cout << grade << endl;

    // === TYPECASTING ===
    // integer / integer => int
    // integer / float ==> result in float
    // integer / double ==> result in double
    // float / int ==> result in float
    // double / int ==> result in double
    
    int newprice = (int)price;
    cout << newprice << endl;

    int ans = 5 /(float) 2; 
    // answer will be in int
    cout << ans << endl;

    // === Operators ===

    // 1) Arithematic Operators

    int a=10,b=5;
    int sum = a+b; 

    cout << sum << endl;
    cout  << "Difference= " << (a-b) << endl;
    cout  << "Sum= " << (a+b) << endl;
    cout  << "Product= " << (a*b) << endl;
    cout  << "Division: " << (a/b) << endl;
    cout  << "Modulo: " << (11%5) << endl;
    cout  << "Devison in C++: " << (11/5) << endl;

    cout  << "Devison in C++: " << (11/(float)2) << endl;
    cout  << "Devison in C++: " << (11/(double)2) << endl;

    cout << sizeof(age) << endl ;


    // Relational operators
    cout << (3<5) << endl; //true
    cout << (3>5) << endl; // false
    cout << (3>=3) << endl; // true
    cout << (3==4) << endl; // false
    cout << (3!=4) << endl; // true
    cout << (3!=3) << endl; // false

    // Logical operators 
    // Not
    cout << (3<1) << endl;
    cout << (!3<1) << endl;
    
    // OR
    cout << ( (3<1) || (5>2) ) << endl;
    cout << ( (3<1) || (5<2) ) << endl;

    // AND
    cout << ( (3>1) && (5>2) ) << endl;
    cout << ( (3<1) && (5<2) ) << endl;
    cout << ( (3>1) && (5<2) ) << endl;

    return 0;
}

 // ; statement terminator

//  Execution starts from main function
// #include <iostream> ==> Preprocessor Direcctive
//It is telling that There is a iostreem file in which there is logic fron "cout"
// main function return an integer value

// === Run Code ====

// 1) Compile
            // g++ code.cpp
            // .exe  for widow user => executable file
            // .out file for mac

// 2) Run Executable File 
// ./a.exe

//  === Combine both steps ====

// g++ code.cpp && ./a.exe

// -----------------------------

// ==== Variables ======

//  containers to store data
// age=25, 
// single character => single quote '' => 'a'
// Multiple character => double quote "" => "abcd"

// Rule for starting Variable name 
// _ , a-z, A-Z
// Variable name  => identifier

// ==== Data Types ====

// 1) Primitive datatypes => int,char,float,bool,double

// ==== int ====
// non decimal => 4 bytes (32 bits) => (8 bits = 1 byte)

// === char ===
// Store single character => 1 bytes space in Ram
// Characters are stored in memory in the form of ASCII(Ameican Standar Code of Information Interchange ) value 
//  A => 65 => it is converted into binary

// === float ====
// Floating value 100.00
// 4 bytes in RAM

// ===bool====
// Ture / False
// 1 byte

//=== double===
// Double size of float
// 8 bytes in memory

// ==== TYPES CASTING ====
// Converting data from one type to another
// 1) Type conversion => implicit process  => compiler do it by itself => small value -> big  value

// Example : 
// float 3.24 (4 byte) => double (8 byte)
// char(1 byte) => integer (4 byte)


// 2) Types Casting
// Explicit => Programmer to it by itself  => big datatype -> small datatype
// number before decimal will be stored in integer like 105.999 will be stored as 105

// == INPUT IN C++ ==

// cin >> varName;

// cin and cout are global objects

// ==== operators ====
// to perform any operation 

// 1)) Arithmetic Operators => +, -, *, /, %
//  in c++ 5/2 = 2 not 2.5, 10/3 = 3

// 2) Relational 
//  Relational operators return true or false
//<, <=, >, >=  
// = used for assignment 
// == to check equaility


// 3) Logical
// OR || (pipe operator)
// AND && 
// NOT (!)

// ===== UNARY OPERATORS =====
// 1) Increment ++
// a = a+1 => a++
// a++(first work then update) and ++a (first update then work)
// 2) Decrement ---
// a = a-1=> a--=> 
// a-- and --a