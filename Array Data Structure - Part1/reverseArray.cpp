#include <iostream>
using namespace std;

void reverseArr(int arr[], int size){
    int start = 0;
    int end = size - 1 ;
    
    while (start < end)
    {
        swap(arr[start], arr[end]);

        start ++;
        end -- ;
    }
}

int main()
{
    // Reverse Array by Two pointer Approach:
    int arr[] = {4,2,7,8,1,2,5};
   

    cout << arr << endl;
    

    return 0;
}