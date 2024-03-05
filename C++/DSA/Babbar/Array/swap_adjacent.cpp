#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i += 1){
        cout << arr[i] << " ";
    } cout << endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0; i < size; i += 2){
        if((i + 1) < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {5,7,1,4,8,3,2,9};
    int odd[5] = {5,7,1,4,8};

    cout << "Even array: ";
    swapAlternate(even, 8);
    printArray(even, 8);

    cout << "Odd array: ";
    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}