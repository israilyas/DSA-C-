#include <iostream>
using namespace std;

int main()
{
    // code

    // ==== Smallest and Largest Value in Array ======
    int smValue = INT8_MAX;
    int numArr[] = {2, 4, 5, 7, 1,-6, -15 ,16};
    int size = sizeof(numArr) / sizeof(int);
    int maxValue = INT8_MIN;
    int smLoc = -1;
    int lgLoc = -1;

    for (int i = 0; i < size; i++)
    {
        // if (numArr[i] < smValue)
        // {
        //     smValue = numArr[i];
        // }
        // smValue = min(smValue,numArr[i]);
        
        // maxValue = max(maxValue,numArr[i]);

    // Index of smallest and largest
        if (numArr[i] > maxValue)
        {
            maxValue = numArr[i];
            lgLoc = i;
        }
        if (numArr[i] < smValue)
        {
            smValue = numArr[i];
            smLoc = i;
        }

    }
    cout << "Smallest Value: " << smValue << endl;
    cout << "Smallest Value Index: " << smLoc << endl;
    cout << "Largest Value: " << maxValue << endl;
    cout << "Largest Value Index: " << lgLoc << endl;


    return 0;
}

// min, max function