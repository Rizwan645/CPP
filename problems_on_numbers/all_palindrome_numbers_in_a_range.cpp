#include<iostream>
using namespace std;
int palindrome(int n)
{
	int a,b=0,num;
	num = n;
    while (num>0)
    {
    	a=num%10;
    	b=(b*10)+a;
    	num=num/10;
    }
	if (n==b)
	{
		cout <<n<<" ";
	}
	return 0;
}
int main()
{
	int l,h;
	cout << "Enter the lowest Range : ";
	cin >> l;
	cout << "Enter the Highest Range : ";
	cin >> h;
	for (int i=l;i<=h;i++)
	{
	    palindrome(i);
	}
	return 0;
}
