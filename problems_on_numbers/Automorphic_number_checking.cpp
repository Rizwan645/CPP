#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int b;
    cout<<"Enter a number: ";
    cin >> n;
    b=n*n;
    int num=n;
    int i=0;
    while(num>0)
    {
        num=num/10;
        i++;
    }
    int c=pow(10,i);
    if((b%c)==n)
    {
        cout<<"YES, "<<n<<" is a Automorphic number";
    }
    else
    {
        cout <<"NO, "<<n<<" is not a Automorphic number.";
    }
    return 0;
}
