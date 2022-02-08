#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x;
	int n;
	int i=0;
	int s=0;
	cout<< "Which type conversion do you want? "<<endl;
	cout << "For Decimal to Binary input 1"<<endl;
	cout << "For Decimal to Octal input 2"<<endl;
	cout << "For Decimal to Hexadecimal input 3"<<endl;
	cout << "For Binary to Decimal input 4"<<endl;
	cout << "Enter your input: ";
	cin >> x;
	if(x==1)
	{
		cout << "Enter the Decimal no: ";
    	cin>>n;
    	while(n>0)
   		{
    		s=s+((n%2)*pow(10,i));
    		n=n/2;
    		i++;
		}
		cout << "your number in Binary: "<<s;
	}
    if(x==2)
    {
    	cout << "Enter the Decimal no: ";
    	cin>>n;
    	while(n>0)
   	 	{
    		s=s+((n%8)*pow(10,i));
    		n=n/8;
    		i++;
		}
		cout << "your number in Octal: "<<s;
	}
	if(x==3)
	{
		cout << "Enter the decimal no: ";
    	cin>>n;
    	while(n>0)
    	{
    		s=s+((n%16)*pow(10,i));
    		n=n/16;
    		i++;
		}
		cout << "your number in hexadecimal: "<<s;
	}
	if(x==4)
	{
		cout << "Enter the Binary no: ";
    	cin>>n;
    	while(n>0)
    	{
    		s=s+((n%10)*pow(2,i));
    		i++;
    		n=n/10;
		}
		cout << "your number in decimal: "<<s;
	}
	return 0;
    
}
