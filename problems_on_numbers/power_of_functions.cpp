#include <iostream>
using namespace std;
int power(int x,int y)
{
	int a=1;
	for (int i=1;i<=y;i++)
	{
		a=x*a;
	}
	return a;	
}
int main ()
{
	int a,b;
	cout << "enter two numbers";
	cin >>a >> b;
	cout<<a<<" to the power "<<b<<" = "<< power(a,b);
	return 0;
}
