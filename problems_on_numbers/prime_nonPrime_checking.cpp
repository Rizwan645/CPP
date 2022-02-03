#include<iostream>
using namespace std;

int main()
{
	int n;
	string x;
    cout << "Input a Number: ";
    cin >> n;
    for(int i=2;i<n-1;i++)
    {
    	if (n%i==0)
    	{
    		x="non prime";
    		break;
		}
		else
		{
			x="prime";
		}
	}
	cout << n<<" is "<<x<<" number";
	
    return 0;
}
