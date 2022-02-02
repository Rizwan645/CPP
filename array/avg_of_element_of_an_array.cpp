#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of your array: ";
	cin>> n;
	int a[n];
	int sum=0;
	cout << "input your "<<n <<" numbers: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout << "average = "<<sum/n;
	return 0;
}
