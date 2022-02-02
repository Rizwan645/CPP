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
	if (n%2==0)
	{
		x=a[(n/2)];
		y=a[(n/2)-1];
		cout << "median = "<<(x+y)/2;
	}
	else 
	{
		cout << "median = "<< a[(n)/2];
	}
	return 0;
}
