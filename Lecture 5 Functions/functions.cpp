#include <iostream>
using namespace std;

//Function definition
void printHello(){
    cout << "Hello\n";
}
//Sum of two numbers
int sum(int num1,int num2){
    int s = num1 + num2;
    return s;
}
// minimum of two numbers
int minTwo(int num1,int num2){//Parameter
    if (num1<num2)
    {
        return num1;
    }
    else{
        return num2;
    }
    
}

int main()
{
    // Function call/ invoke
    // int sumValue = sum(7,8);
    // cout << sumValue;

    cout << sum(7,8) << endl;

    printHello();

    cout << minTwo(5,2);//Arguments

    return 0;
}


//Void and int
// return
//Parameters => inputs of function
// Arguments => values we passed to function at the time of  call => actual value
// redendency => unnecessary repitition in the code
//literals => values that not change => arguments are also literals
// Return statement is the final  statement in function
// we can return empty in voide function like,"return;"


// ==== Function in memory ======

// Stack == static allocation
// Heap == dynamic allocation

// function store in stack in memory (RAM)
// main function is automatically called by compiler

// stack Frame ==> every function is stored in stack memory in the form  of stack frame
// top of the stack ==> current function

//======== arguments =========

// 1) Pass by value ==> when we pass primitive ( int,float,double,char etc) =>  their copy is created in the parameters
// 2) pass by  Reference ==> Address ==> Pointers