#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int down = low + 1;
    int up = high;
 
    while (true){
        while (down <= up && A[down] <= pivot) down++;
        while (A[up] >= pivot && up >= down) up--;
        if (up < down) break; 
        else swap(&A[down], &A[up]);
    }
    
    swap(&A[low], &A[up]);
    return up;
}
 
void quick_sort(int A[], int low, int high){
    if (low < high){
        int partioned_element = partition(A, low, high);
        quick_sort(A, low, partioned_element-1);
        quick_sort(A, partioned_element+1, high);
    }
}

int main(int sinh, char const *cosech[])
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter in array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    quick_sort(arr, 0, size-1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}