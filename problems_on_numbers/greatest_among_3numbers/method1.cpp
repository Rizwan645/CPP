#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;
    cout << "Enter your two number: ";
    cin >> n1>>n2>>n3;
	if (n1>n2&&n1>n3)
	{
		cout <<n1<< " is greatest";
	}
	else if (n2>n1&&n2>n3)
	{
		cout <<n2<<" is greatest";
	}
	else if (n1==n2==n3)
	{
		cout << "your all inputs are same";
	}
	else 
	{
		cout << n3<<" is greatest";
	}
	return 0;
}
