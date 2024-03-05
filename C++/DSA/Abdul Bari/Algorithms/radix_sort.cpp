#include <iostream>
using namespace std;

void pass(int arr[], int n, int exp){
    int final[n];
    int count[10]={0};

    for(int i=0; i<n; i++) count[(arr[i]/exp)%10]++;

    for(int i=1; i<10; i++) count[i]+=count[i-1];

    for(int i=n-1; i>=0; i--){
        final[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }

    for(int i=0; i<n; i++) arr[i]=final[i];
}

void radix_sort(int arr[], int n){
    int max=arr[0];
    for(int i=0; i<n; i++) if(max<arr[i]) max=arr[i];

    for(int exp=1; max/exp>0; exp*=10){
        pass(arr, n, exp);
    }
}

int main(int sinh, char const *cosech[])
{
    int arr[]={170, 45, 75, 90, 802, 24, 2, 66};
    radix_sort(arr, 8);
    for(int i=0; i<8; i++) cout<<arr[i]<<" ";

    return 0;
}