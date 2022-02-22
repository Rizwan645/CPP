#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int nd=0,sum=0;
    
    cout<<"Enter your Number: ";
    cin >> n;
    int num=n,b;
    while (num>0)
    {
        b=num%10;
        nd++;
        num=num/10;
      
    }
    int num2=n,c;
    while(num2>0)
    {
        c=num2%10;
        sum=sum+pow(c,nd);
        num2=num2/10;
    }
    if(sum==n)
    {
        cout<<"YES, "<<n<<" is a Armstrong Number.";
    }
    else
    {
        cout<<"NO, "<<n<<" is not a Armstrong Number.";
    }
    return 0;
}
