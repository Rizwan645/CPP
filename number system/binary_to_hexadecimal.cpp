#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int b;
	int i=0;
	int d=0;
    cout << "Enter the binary no: ";
    cin>>b;
    while(b>0)
    {
    	d=d+((b%10)*pow(2,i));
    	i++;
    	b=b/10;
	}
	int arr[100]={};
	int k=0;
	while (d>0)
    {
    	arr[k]=d%16;
    	d=d/16;
    	k++;
	}
	cout<< "Your number in Hexadecimal: ";
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
