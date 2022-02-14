#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int o;
	int i=0,j=0;
	int d=0;
	int b=0;
    cout << "Enter the octal no: ";
    cin>>o;
    while(o>0)
    {
    	d=d+((o%10)*pow(8,i));
    	o=o/10;
    	i++;
	}
	 while(d>0)
    {
    	b=b+((d%2)*pow(10,j));
    	d=d/2;
    	j++;
	}
	cout << "your number in binary: "<<b;
	return 0;
    
}
