#include <iostream>
using namespace std;

void heap(int arr[], int n){
    int i=n;
    int temp=arr[i];
    while(i>1 && temp>arr[i/2]){
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}

void heap_sort(int arr[], int n){
    int i=1, j=i*2, val=arr[1];
    arr[1]=arr[n];
    arr[n]=val;
    while(j<n-1){
        if(arr[j]<arr[j+1]) j++;
        if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i=j;
            j=j*2;
        }
        else break;
    }
}

int main(int sinh, char const *cosech[]){
    int arr[]={0,10,20,30,25,5,40,35};

    for(int i=2; i<=7; i++){
        heap(arr, i);
    }

    for(int i=7; i>=2; i--){
        heap_sort(arr, i);
    }

    cout<<"Array: ";
    for(int i=1; i<=7; i++) cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}