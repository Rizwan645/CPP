#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum=0;
	string x;
    cout << "~~SUM OF 1ST N NATURAL NUMBERS~~"<<endl;
    cout << " input the value of N: ";
    cin >> n;
   	for (int i=1;i<=n;i++)
   	{
   		sum = sum+i;
	}
	cout << "SUM="<<sum;
    return 0;
}
