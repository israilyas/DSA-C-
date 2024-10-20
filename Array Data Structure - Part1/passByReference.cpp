#include <iostream>
using namespace std;

void changeArr(int arr[],int size){
    cout << "In Function:" << endl;
    for(int i = 0 ; i < size; i++){
        arr[i] *= 2;
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main()
{
    // 
    int arr[] = {1,2,3};
    cout << "Before FUnction Call:" << endl;
    for(int i = 0 ; i < 3; i++){
        cout << arr[i]<< " ";
    };
    cout << endl;


    // Invocation
    changeArr(arr,3);
    cout << "After FUnction Call:" << endl;
    for(int i = 0 ; i < 3; i++){
        cout << arr[i]<< " ";
    };

    return 0;
}
