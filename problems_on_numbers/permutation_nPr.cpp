#include <iostream>
using namespace std;
int factorial(int a)
{
    int x=1;
    while(a>0)
    {
        x=x*a;
        a--;
    }
    return x;
    
}
int main()
{
    int n,r;
    cout<<"To calculate nPr, Please"<<endl;
    cout<<"Enter the value of n : ";
    cin >>n;
    cout <<"Enter the valur of r: ";
    cin>>r;
    double d=(factorial(n))/(factorial(n-r));
    if(n<r)
    {
        cout << "ERROR, please input valid numbers";
    }
    else
    {
        cout<<n<<"P"<<r<<" = "<<d;
    }
    return 0;
}
