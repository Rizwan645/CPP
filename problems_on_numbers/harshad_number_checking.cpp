#include <iostream>
using namespace std;

int main()
{
    int n;
    int a,b=0;
    cout<<"Enter a number: ";
    cin >> n;
    int num=n;
    while(num>0)
    {
        a=num%10;
        b=b+a;
        num=num/10;
    }
    if((n%b)==0)
    {
        cout<<"YES, "<<n<<" is a Harshad number";
    }
    else
    {
        cout <<"NO, "<<n<<" is not a Harshad number.";
    }
    return 0;
}
