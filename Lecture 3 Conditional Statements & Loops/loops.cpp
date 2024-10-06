#include <iostream>
using namespace std;

int main(){
    
    // ===== WHile Loop =====

    // Q: Print numbers from 1 to 5

    // int count = 1;
    // while( count <=5){
    //     cout << count << " ";
    //     count++;
    // }

     // ===== For Loop =====
    //  for(initialisation; condition; updation)
    
    // int n = 20;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << " ";
    // }

    // Q: Sum of numbers from 1 to n
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += i;
    //     if (i == 5)
    //     {
    //         break;
    //     }
        
    // }
    // cout << sum << endl;
    
     // Q: Sum of  all odd numbers from 1 to n

    //  int n = 10;
    //  int oddSum = 0;
    //  for (int i = 0; i < n; i++)
    //  {
    //     if (i%2 != 0)
    //     {   
    //         cout << i << " ";
    //         oddSum += i;
    //     }
        
    //  }
    //  cout << "Odd Sum = " << oddSum<< endl;

      // ===== Do while Loop =====
      int n = 10;
      int i =0;
      do
      {
        cout << i << " ";
        i++;
      } while (i <= n);
      
    

    return 0;
}

// === LOOPS ===
// while,do-while,for

// loop variable => counter => i,j,k

// Infinite loop => ending condition never false
// variable names in camelCase => firstName,totalSum => it is convention

// Break Keyword => break, int, while, For
// keywords are specialreservedd words (it has meaning for compiler)=> and we cant use keywords as variable names