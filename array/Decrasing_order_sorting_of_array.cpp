#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of your array: ";
	cin>> n;
	int a[n];
	float x=0,y=0;
	cout << "input your "<<n <<" numbers: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int temp = 0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (a[i]<a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	
	}
	cout << "array: ";
	for (int i=0;i<n;i++)
	{
		cout<< a[i]<<" ";
	}
	
	return 0;
}
