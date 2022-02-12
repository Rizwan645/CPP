#include<iostream>
using namespace std;

int main()
{
	int n,a,b=0,num;
    cout << "Enter your number: ";
    cin >> n;
	num = n;
    while (num>0)
    {
    	a=num%10;
    	b=(b*10)+a;
    	num=num/10;
	}
	if (n==b)
	{
		cout << n<<" is a palindrome number.";
	}
	else 
	{
		cout << n << " is not a palindrome number.";
	}
    return 0;
}
