#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	int i=0;
	int s=0;
    cout << "Enter the decimal no: ";
    cin>>n;
    while(n>0)
    {
    	s=s+((n%2)*pow(10,i));
    	n=n/2;
    	i++;
	}
	cout << "your number in binary: "<<s;
	return 0;
    
}
