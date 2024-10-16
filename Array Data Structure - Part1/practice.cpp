#include <iostream>
using namespace std;

int main()
{
    // code

    // ==== Smallest Value in Array ======
    int smValue = INT8_MAX;
    int numArr[] = {2, 4, 5, 7, 1,-6, -15 ,16};
    int size = sizeof(numArr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        // if (numArr[i] < smValue)
        // {
        //     smValue = numArr[i];
        // }
        smValue = min(smValue,numArr[i]);
    }
    cout << smValue << endl;

    // ==== Greatest Value in Array ======
    // int maxValue = INT8_MIN;
    // int numArr[] = {2, 4, 5, 7, 1,-6, -15 ,16};
    // int size = sizeof(numArr) / sizeof(int);

    // for (int i = 0; i < size; i++)
    // {
    //     // if (numArr[i] > maxValue)
    //     // {
    //     //     maxValue = numArr[i];
    //     // }

    //     maxValue = max(maxValue,numArr[i]);
    // }
    // cout << maxValue << endl;

    return 0;
}

// min, max function