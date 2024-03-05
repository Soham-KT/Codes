#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partiotion(int arr[], int low, int high){
    int pivot=arr[low];
    int down=low+1, up=high;

    while(true){
        while(down<=up && arr[down]<=pivot) down++;
        while(down<=up && arr[up]>pivot) up--;
        if(up<down) break;
        else swap(&arr[up], &arr[down]);
    }
    swap(&arr[low], &arr[up]);

    return up;
}

void quick_sort(int arr[], int low, int high){
    if(low<high){
        int partition_element=partiotion(arr, low, high);
        quick_sort(arr, low, partition_element-1);
        quick_sort(arr, partition_element+1, high);
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

    cout<<"Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}