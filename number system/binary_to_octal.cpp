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
	int o=0;
	int j=0;
	while(d>0)
    {
    	o=o+((d%8)*pow(10,j));
    	d=d/8;
    	j++;
	}
	cout << "your number in octal: "<<o;
	return 0;
    
}
