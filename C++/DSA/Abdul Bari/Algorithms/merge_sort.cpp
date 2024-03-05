#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int arr_[high+1];
    int i=low, j=mid+1, k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            arr_[k]=arr[i];
            i++;
            k++;
        }
        else{
            arr_[k]=arr[j];
            j++;
            k++;
        }
    }
    for(; i<=mid; i++, k++) arr_[k]=arr[i];
    for(; j<=high; j++, k++) arr_[k]=arr[j];

    for(int x=low; x<=high; x++) arr[x]=arr_[x];
}

void merge_sort(int arr[], int low, int high){
    if(low<high){
        int mid=low+(high-low)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main(int sinh, char const *cosech[])
{
    int arr[]={8, 2, 9, 6, 5, 3, 7, 4};
    merge_sort(arr, 0, 7);
    cout<<"Array: ";
    for(int i=0; i<8; i++) cout<<arr[i]<<" ";

    return 0;
}