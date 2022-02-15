#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int taking_input_type();
int taking_output_type();
void conversion(int x);

void decimal_others(int y);
void binary_others(int y);
void octal_others(int y);
void hexadecimal_others(int y);

void decimal_decimal();
void decimal_binary();
void decimal_octal();
void decimal_hexadecimal();

void binary_decimal();
void binary_binary();
void binary_octal();
void binary_hexadecimal();

void octal_decimal();
void octal_binary();
void octal_octal();
void octal_hexadecimal();

void hexadecimal_decimal();
void hexadecimal_binary();
void hexadecimal_octal();
void hexadecimal_hexadecimal();
int main()
{
	int x,y;
    x=taking_input_type();
    y=taking_output_type();
    conversion(x);
    return 0;
}
int taking_input_type()
{
	int x;
    cout << "CONVESRION OF NUMBERS"<<endl;
    cout << "TYPE OF YOUR INPUT"<<endl;
    cout << "	For Decimal press 1"<<endl;
	cout << "	For Binary press 2"<<endl;
	cout << "	For Octal press 3"<<endl;
	cout << "	For Hexadecimal press 4"<<endl;
	cout << "Press: ";
	cin >> x;
	return x;
}
int taking_output_type()
{
	int y;
	cout << "TYPE OF YOUR OUTPUT"<<endl;
	cout << "	For Decimal press 1"<<endl;
	cout << "	For Binary press 2"<<endl;
	cout << "	For Octal press 3"<<endl;
	cout <<	"	For Hexadecimal press 4"<<endl;
	cout << "Press: ";
	cin >> y;
	return y;
}
void conversion(int x)
{
	int y;
	if(x==1)
    {
    	decimal_others(y);
	}
	
	else if(x==2)
	{
		binary_others(y);
	}
	else if(x==3)
	{
		octal_others(y);
	}
	else if(x==4)
	{
		hexadecimal_others(y);	
	}
	else 
	{
		cout<<"Error";
	}
}
void decimal_others(int y)
{
	
	if(y==1)
	{
		decimal_decimal();
	}
	else if(y==2)
	{
		decimal_binary();
	}
	else if(y==3)
	{
		decimal_octal();
	}
	else if(y==4)
	{
		decimal_hexadecimal();
	}
	else
	{
		cout<<"Error";
	}	
	
}
void binary_others(int y)
{
	cin >> y;
		if(y==1)
		{
			binary_decimal();	
		}
		else if (y==2)
		{
			binary_binary();
		}
		else if(y==3)
		{
			binary_octal();
		}
		else if(y==4)
		{
			binary_hexadecimal();
		}
		else
		{
			cout<<"Error";
		}
}
void octal_others(int y)
{
	if(y==1)
	{
		octal_decimal();
	}
	if(y==2)
	{
		octal_binary();
	}
	if (y==3)
	{
		octal_octal();
	}
	if(y==4)
	{
		octal_hexadecimal();
	}
	else
	{
		cout<<"Error";
	}
}
void hexadecimal_others(int y)
{
	if(y==1)
	{
		hexadecimal_decimal();
	}
	else if(y==2)
	{
		hexadecimal_binary();
	}
	else if(y==3)
	{
		hexadecimal_octal();
	}
	else if(y==4)
	{
		hexadecimal_hexadecimal();
	}
	else
	{
		cout<<"Error";
	}
}
void decimal_decimal()
{
	int n;
	cout << "Enter the Decimal no: ";
    cin>>n;
	cout << "Your number in Decimal:"<<n;
}
void decimal_binary()
{
	int n;
	int i=0;
	int s=0;
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
void decimal_octal()
{
	int n;
	int i=0;
	int s=0;
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
void decimal_hexadecimal()
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
void binary_decimal()
{
	int n;
	int i=0;
	int s=0;
    cout << "Enter the Binary no: ";
    cin>>n;
    while(n>0)
    {
    	s=s+((n%10)*pow(2,i));
    	i++;
    	n=n/10;
	}
	cout << "your number in Decimal: "<<s;
}
void binary_binary()
{
	int n;
	cout << "Enter the Binary no: ";
	cin>>n;
	cout << "your number in Binary: "<<n;
}
void binary_octal()
{
	int b;
	int i=0;
	int d=0;
   	cout << "Enter the Binary no: ";
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
	cout << "your number in Octal: "<<o;
}
void binary_hexadecimal()
{
	int b;
	int i=0;
	int d=0;
    cout << "Enter the Binary no: ";
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
void octal_decimal()
{
	int n;
	int i=0;
	int s=0;
   	cout << "Enter the Octal no: ";
   	cin>>n;
   	while(n>0)
    {
    	s=s+((n%10)*pow(8,i));
    	n=n/10;
    	i++;
	}
	cout << "your number in Decimal: "<<s;		
}
void octal_binary()
{
	int o;
	int i=0,j=0;
	int d=0;
	int b=0;
    cout << "Enter the Octal no: ";
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
	cout << "your number in Binary: "<<b;	
}
void octal_octal()
{
	int n;
	cout << "Enter the Octal no: ";
    cin>>n;
    cout << "your number in Octal: "<<n;	
}
void octal_hexadecimal()
{
	int o;
	int i=0;
	int d=0;
    cout << "Enter the Octal no: ";
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
	cout << "your number in Hexadecimal: ";
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
void hexadecimal_decimal()
{
	char s[100]={};
	int a=0;
	int j=0;
	cout << "Enter your number in Hexadecimal: ";
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
void hexadecimal_binary()
{
	char h[100]={};
	int d=0;
	int j=0;
	cout << "Enter your number in Hexadecimal: ";
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
		cout << "your number in Binary: "<<b;
}
void hexadecimal_octal()
{
	char h[100]={};
	int d=0;
	int j=0;
	cout << "Enter your number in Hexadecimal: ";
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
	cout << "your number in Octal: "<<o;
}
void hexadecimal_hexadecimal()
{
	char h[100]={};
	cout << "Enter your number in Hexadecimal: ";
	cin >> h;
	cout << "your number in Hexadecimal: "<<h;
}
