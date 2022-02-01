#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "The no of elements from that you want to find the max number: ";
	cin>> n;
	int arr[n];
	cout << "input your "<<n << "numbers: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int max=arr[0];
	for (int i=1;i<n;i++)
	{
		if(arr[i]>arr[0])
		{
			max=arr[i];
		}
	}
    cout << "maximum no is : "<<max;
    return 0;
}
