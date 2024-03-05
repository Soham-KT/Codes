#include <iostream>

using namespace std;

int main()
{
    int sum=0, min=0, max=0, ele=0, n=0, q=0, posn=0;
    float avg=0.0;

    cout<<"Enter the number of elements you want in array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"The sum of elements of array is: "<<sum<<endl;

    for(int i=0; i<n; i++){
        min=arr[0];
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"The minimum element of array is: "<<min<<endl;

    for(int i=0; i<n; i++){
        max=arr[0];
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"The minimum element of array is: "<<max<<endl;

    cout<<"Enter element you want to seatch for: ";
    cin>>ele;
     
    for(int i=0; i<n; i++){
        if(arr[i]==ele){
        q=1;
        posn=i+1;
        }
    }
    if(q==1)
    cout<<ele<<" found at position "<<posn;
    else
    cout<<ele<<" not found";
}