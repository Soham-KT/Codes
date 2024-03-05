#include <iostream>
using namespace std;

int search(int ele, int arr[], int start, int end)
{
	int n=(start+end)/2;
	if(ele==arr[n]) return n;
	else if(ele>arr[n]) search(ele, arr, n+1, end);
	else search(ele, arr, start, n-1);
	
}

int main()
{
	int n;

	cout<<"Enter number of elements: ";
	cin>>n;

	int arr[n];
	cout<<"Enter array: ";
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