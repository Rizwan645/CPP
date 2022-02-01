#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of your array: ";
	cin>> n;
	int a[n];
	int b[n];
	cout << "input your "<<n <<" numbers: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for (int i=1;i<n;i++)
	{
		if(a[i]>a[0])
		{
			max=a[i];
		}
	}

	for (int i=0;i<n;i++)
	{
		if(a[i]!=max)
		{
			b[i+1]=a[i];
		}
		else 
		{
			continue;
		}
	}
	int max2=b[0];
	for (int j=1;j<n;j++)
	{
		if(b[j]>max2)
		{
			max2=b[j];
		}
	}
	cout << "your 2nd largest no is : "<<max2<<endl;
    return 0;
}
