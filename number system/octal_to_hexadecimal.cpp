#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int o;
	int i=0;
	int d=0;
    cout << "Enter the octal no: ";
    cin>>o;
    while(o>0)
    {
    	d=d+((o%10)*pow(8,i));
    	o=o/10;
    	i++;
	}
	int arr[100]={};
	int k=0;
	while (d>0)
    {
    	arr[k]=d%16;
    	d=d/16;
    	k++;
	}
	cout << "your number in hexadecimal: ";
	for (int j=k-1;j>=0;j--)
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
