
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	char h[100]={};
	int d=0;
	int j=0;
	cout << "Enter your hexadecimal number: ";
    cin >> h;
    int len=strlen(h);
    for (int i=len-1;i>=0;i--)
    {
    	if(h[i]>='0' && h[i]<='9')
    	{
    		d=d+((h[i]-48)*pow(16,j));
		}
		if(h[i]>='A' && h[i]<='F')
		{
			d=d+((h[i]-55)*pow(16,j));
		}
		j++;
	}
	int o=0;
	int k=0;
	 while(d>0)
    {
    	o=o+((d%8)*pow(10,k));
    	d=d/8;
    	k++;
	}
	cout << "your number in octal: "<<o;
    return 0;
}
