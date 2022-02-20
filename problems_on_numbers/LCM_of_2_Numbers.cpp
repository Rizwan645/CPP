#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int min=0;
    cout<<"Enter 2 numbers : "<<endl;
    cin >>a>>b;
    if(a<b)
    {
        min=a;
    }
    else
    {
        min=b;
    }
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            c=i;
        }
    }
    int LCM=(a*b)/c;
    cout << "LCM of "<<a<<" and "<<b<<" = "<<LCM;
    return 0;
}
