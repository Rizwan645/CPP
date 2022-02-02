#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of your array: ";
	cin>> n;
	int a[n];
	cout << "input your "<<n <<" numbers: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout << "Reverese of your array is: ";
	for (int i=n-1;i>=0;i--)
	{
		cout <<  a[i]<< " ";
	}
	return 0;
}
