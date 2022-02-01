#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the size of your array: ";
	cin>> n;
	int arr[n];
	cout << "input your "<<n<< "numbers: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int min=arr[0];
	for (int i=1;i<n;i++)
	{
		if(arr[i]<arr[0])
		{
			min=arr[i];
		}
	}
    cout << "minimum no is : "<<min;
    return 0;
}
