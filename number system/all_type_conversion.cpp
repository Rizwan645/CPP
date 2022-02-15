#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
	int x,y;
    cout << "CONVESRION OF NUMBERS"<<endl;
    cout << "Type of your input"<<endl;
    cout << "For Decimal press 1"<<endl;
	cout << "For Binary press 2"<<endl;
	cout << "For Octal press 3"<<endl;
	cout << "For Hexadecimal press 4"<<endl;
	cout << "Press: ";
	cin >> x;
	if (x==1)
	{
		cout << "Type of your Output"<<endl;
		cout << "For Binary press 2"<<endl;
		cout << "For Octal press 3"<<endl;
		cout << "For Hexadecimal press 4"<<endl;
		cout << "Press: ";
		cin >> y;
		if(y==2)
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
		}
		else if(y==3)
		{
			int n;
			int i=0;
			int s=0;
    		cout << "Enter the decimal no: ";
    		cin>>n;
    		while(n>0)
    		{
    			s=s+((n%8)*pow(10,i));
    			n=n/8;
    			i++;
			}
			cout << "your number in octal: "<<s;
		}
		else if(y==4)
		{
			int arr[100]={};
			int n;
    		cout << "Enter your Decimal no: ";
    		cin>>n;
    		int i=0;
    		while (n>0)
    		{	
    			arr[i]=n%16;
    			n=n/16;
    			i++;
			}
			for (int j=i-1;j>=0;j--)
			{
				if(arr[j]<10)
				{
					cout << arr[j];
				}
				else
				{
					cout << char(arr[j]+55);
				}
			}	
		}
		else
		{
			cout<<"Error";
		}	
	}
	else if(x==2)
	{
		cout << "Type of your Output"<<endl;
		cout << "For Decimal press 1"<<endl;
		cout << "For Octal press 3"<<endl;
		cout << "For Hexadecimal press 4"<<endl;
		cout << "Press: ";
		cin >> y;
		if(y==1)
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
		}
		else if(y==3)
		{
			int b;
			int i=0;
			int d=0;
    		cout << "Enter the binary no: ";
    		cin>>b;
    		while(b>0)
    		{
    			d=d+((b%10)*pow(2,i));
    			i++;
    			b=b/10;
			}
			int o=0;
			int j=0;
			while(d>0)
    		{
    			o=o+((d%8)*pow(10,j));
    			d=d/8;
    			j++;
			}
			cout << "your number in octal: "<<o;
		}
		else if(y==4)
		{
			int b;
			int i=0;
			int d=0;
    		cout << "Enter the binary no: ";
    		cin>>b;
    		while(b>0)
    		{
    			d=d+((b%10)*pow(2,i));
    			i++;
    			b=b/10;
			}
			int arr[100]={};
			int k=0;
			while (d>0)
    		{
    			arr[k]=d%16;
    			d=d/16;
    			k++;
			}
			cout<< "Your number in Hexadecimal: ";
			for (int j=k-1;j>=0;j--)
			{
				if(arr[j]<10)
				{
					cout << arr[j];
				}
				else
				{
					cout << char(arr[j]+55);
				}
			}
		}
		else
		{
			cout<<"Error";
		}
	}
	else if(x==3)
	{
		cout << "Type of your Output"<<endl;
		cout << "For Decimal press 1"<<endl;
		cout << "For Binary press 2"<<endl;
		cout << "For Hexadecimal press 4"<<endl;
		cout << "Press: ";
		cin >> y;
		if(y==1)
		{
			int n;
			int i=0;
			int s=0;
    		cout << "Enter the octal no: ";
    		cin>>n;
    		while(n>0)
    		{
    			s=s+((n%10)*pow(8,i));
    			n=n/10;
    			i++;
			}
			cout << "your number in decimal: "<<s;
		}
		if(y==2)
		{
			int o;
			int i=0,j=0;
			int d=0;
			int b=0;
    		cout << "Enter the octal no: ";
    		cin>>o;
    		while(o>0)
    		{
    			d=d+((o%10)*pow(8,i));
    			o=o/10;
    			i++;
			}
	 		while(d>0)
    		{
    			b=b+((d%2)*pow(10,j));
    			d=d/2;
    			j++;
			}
			cout << "your number in binary: "<<b;	
		}
		if(y==4)
		{
			int o;
			int i=0;
			int d=0;
    		cout << "Enter the octal no: ";
    		cin>>o;
    		while(o>0)
    		{
    			d=d+((o%10)*pow(8,i));
    			o=o/10;
    			i++;
			}
			int arr[100]={};
			int k=0;
			while (d>0)
    		{
    			arr[k]=d%16;
    			d=d/16;
    			k++;
			}
			cout << "your number in hexadecimal: ";
			for (int j=k-1;j>=0;j--)
			{
				if(arr[j]<10)
				{
					cout << arr[j];
				}
				else
				{
					cout << char(arr[j]+55);
				}
			}
		}
		else
		{
			cout<<"Error";
		}
	}
	else if(x==4)
	{
		cout << "Type of your Output"<<endl;
		cout << "For Decimal press 1"<<endl;
		cout << "For Binary press 2"<<endl;
		cout << "For Octal press 3"<<endl;
		cout << "Press: ";
		cin >> y;
		if(y==1)
		{
			char s[100]={};
			int a=0;
			int j=0;
			cout << "Enter your hexadecimal number: ";
    		cin >> s;
    		int len=strlen(s);
    		for (int i=len-1;i>=0;i--)
    		{
    			if(s[i]>='0' && s[i]<='9')
    			{
    				a=a+((s[i]-48)*pow(16,j));
				}
				if(s[i]>='A' && s[i]<='F')
				{
					a=a+((s[i]-55)*pow(16,j));
				}
				j++;
			}
			cout <<"Your number in Decimal: "<<a;
		}
		else if(y==2)
		{
			char h[100]={};
			int d=0;
			int j=0;
			cout << "Enter your hexadecimal number: ";
    		cin >> h;
    		int len=strlen(h);
    		for (int i=len-1;i>=0;i--)
    		{
    			if(h[i]>='0' && h[i]<='9')
    			{
    				d=d+((h[i]-48)*pow(16,j));
				}
				if(h[i]>='A' && h[i]<='F')
				{
					d=d+((h[i]-55)*pow(16,j));
				}
				j++;
			}
			int k=0;
			long b=0;
	 		while(d>0)
    		{
    			b=b+((d%2)*pow(10,k));
    			d=d/2;
    			k++;
			}
			cout << "your number in binary: "<<b;
		}
		else if(y==3)
		{
			char h[100]={};
			int d=0;
			int j=0;
			cout << "Enter your hexadecimal number: ";
    		cin >> h;
    		int len=strlen(h);
    		for (int i=len-1;i>=0;i--)
    		{
    			if(h[i]>='0' && h[i]<='9')
    			{
    				d=d+((h[i]-48)*pow(16,j));
				}
				if(h[i]>='A' && h[i]<='F')
				{
					d=d+((h[i]-55)*pow(16,j));
				}
				j++;
			}
			int o=0;
			int k=0;
	 		while(d>0)
    		{
    			o=o+((d%8)*pow(10,k));
    			d=d/8;
    			k++;
			}
			cout << "your number in octal: "<<o;
		}
		else
		{
			cout<<"Error";
		}
	}
	else 
	{
		cout<<"Error";
	}
    return 0;
}
