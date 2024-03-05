#include <iostream>
using namespace std;

int search(int ele, int arr[], int start, int end)
{
	while(start!=end)
    {
        int n;
        n=(start+end)/2;
        if(ele==arr[n]) return n;
        else if(ele>arr[n]) start=n+1;
        else end=n-1;
    }
	
}

int main()
{
	int n;

	cout<<"Enter number of elements: ";
	cin>>n;

	int arr[n];
	cout<<"Enter array: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp= arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}

	cout<<"Sorted array: ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int ele;

	cout<<"Enter element to search: ";
	cin>>ele;

	int index=search(ele, arr, 0, n);

	cout<<"Element found at index : "<<index+1;

	return 0;
}

// time function f(n)= n^2 + 2n + log2(n)
// time complexity = O()