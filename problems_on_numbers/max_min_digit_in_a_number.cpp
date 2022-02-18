#include <iostream>

using namespace std;

int main()
{
    int n,min=9,max=0,x;
    cout<<"Input a number: ";
    cin >> n;
    while(n>0)
    {
       x=n%10;
       if (min>x)
       {
           min=x;
       }
       if(max<x)
       {
           max=x;
       }
       n=n/10;
    }
    cout <<"max digit= "<<max<<endl;
    cout <<"min digit= "<<min;
    return 0;
}
