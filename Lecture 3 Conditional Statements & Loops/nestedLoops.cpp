#include <iostream>
using namespace std;

int main(){

    int n = 5;
    int m = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " " ;
        }
        cout << "\n";
        
    }
    

    return 0;
}

// outer loop ==> number of lines ===> no. or rows
// inner loop ==> no. of items in one line ====> no. of columns