#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	int i=0;
	int s=0;
    cout << "Enter the binary no: ";
    cin>>n;
    while(n>0)
    {
    	s=s+((n%10)*pow(2,i));
    	i++;
    	n=n/10;
	}
	cout << "your number in decimal: "<<s;
	return 0;
    
}
