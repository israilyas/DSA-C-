#include <iostream>
using namespace std;



int main(){

    //  ==================IF-Else ================

    // Check whether the number is positive or negative
    // int num;
    
    // cout << "Enter a number: ";
    // cin >> num;

    // if (num>=0){
    //     cout << num << " is a positive number" ;
    // }
    // else
    // {
    //     cout << num << " is a negative number" ;
    // }

    //===== If user can vote or note ====
    // int age;

    // cout << "Enter your age: ";
    // cin >> age;

    // if (age>=19)
    // {
    //     cout << "Your can vote!\n";
    // }
    // else
    // {
    //     cout << "Your can not vote!\n";
    // }

    // Find number is odd or even??
    // int n;
    // cout << "Enter a number:";
    // cin >> n;

    // if (n%2==0)
    // {
    //     cout << "Even number!";
    // }
    // else
    // {
    //     cout << "Odd number!";
    // }


    //====== If-Else If-else ========

    //=== Grading System===

    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Your grade is 'A'\n";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Your grade is 'B'\n";
    }
    else
    {
        cout << "Your grade is 'C'\n";
    }
    
    
    
    

    return 0;
}