#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
    cout << "Enter your two number: ";
    cin >> n1>>n2;
	if (n1>n2)
	{
		cout <<n1<< " is greater";
	}
	else if (n1<n2)
	{
		cout <<n2<<" n2 is greater";
	}
	else 
	{
		cout << "your both input are same";
	}
	return 0;
}
