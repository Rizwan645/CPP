#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
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
	cout <<"Decimal= "<<a;
    return 0;
}
