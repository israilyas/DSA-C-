#include <iostream>
using namespace std;

int linSearch(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}

int main()
{
    // Search 8 ==> Return index if found , Return -1 if not found
    int arr[] = {4,2,7,8,1,2,5};
    int target = 8;

    cout << linSearch(arr,7,8) << endl;
    cout << linSearch(arr,7,2) << endl;
    cout << linSearch(arr,7,10) << endl;
    cout << linSearch(arr,7,5) << endl;
    cout << linSearch(arr,7,12) << endl;

    return 0;
}