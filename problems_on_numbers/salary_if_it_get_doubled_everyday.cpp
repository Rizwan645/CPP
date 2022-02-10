#include<iostream>
using namespace std;

int main()
{
	int a=1,c;
	long n=0;
    cout << "Enter the no days: ";
    cin >> c;
    for (int i=0;i<c;i++)
    {
    	n=n+a;
    	a=2*a;
	}
	cout << "ans: "<<n;
    return 0;
}
