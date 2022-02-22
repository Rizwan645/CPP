#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum=0,d;
    cout<<"Enter a number: ";
    cin >> n;
    int num=n;
    for(int i=1;i<n;i++)
    {
        if(num%i==0)
        {   
            //cout <<"i="<<i<<" "<< "sum="<<sum<<endl;
            sum=sum+i;
        }
    }
    if(sum>n)
    {
        cout<<"YES, "<<n<<" is Abundunt number.";
    }
    else 
    {
         cout<<"NO, "<<n<<" is not Abundunt number.";
    }
    return 0;
}
