#include<iostream>
using namespace std;

int main()
{
	int n,a=0,b=0;
    cout << "Enter your number: ";
    cin >> n;
	while(n>0)
	{
		a=n%10;
		b=(b*10)+a;
		n=n/10;
	}
	cout << "Reverse of your number is : "<<b;
	return 0;
}
