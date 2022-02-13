#include<iostream>
using namespace std;

int main()
{
	int arr[100]={};
	int n;
    cout << "Enter your Decimal no: ";
    cin>>n;
    int i=0;
    while (n>0)
    {
    	arr[i]=n%16;
    	n=n/16;
    	i++;
	}
	for (int j=i-1;j>=0;j--)
	{
		if(arr[j]<10)
		{
			cout << arr[j];
		}
		else
		{
			cout << char(arr[j]+55);
		}
	}
    return 0;
}
