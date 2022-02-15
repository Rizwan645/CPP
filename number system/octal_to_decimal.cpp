#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	int i=0;
	int s=0;
    cout << "Enter the octal no: ";
    cin>>n;
    while(n>0)
    {
    	s=s+((n%10)*pow(8,i));
    	n=n/10;
    	i++;
	}
	cout << "your number in decimal: "<<s;
	return 0;
    
}
