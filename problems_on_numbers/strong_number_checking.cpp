#include <iostream>

using namespace std;
int fact(int x)
{
    long fact=1;
    while (x>0)
    {
        fact=fact*x;
        x--;
    }
    return fact;
}
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
        num=num/10;
        b=b+fact(a);
        a=0;
    }
    if(b==n)
    {
        cout<<"YES, "<<n<<" is a strong number";
    }
    else
    {
        cout <<"NO "<<n<<" is not a strong number.";
    }
    return 0;
}
