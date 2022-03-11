#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout<< "Enter the lower limit:";
    cin>> start;
    cout<< "Enter the upper limit:";
    cin>> end;
    cout<< "Prime numbers between "<< start << " and " << end << " are: ";
    int n=start;
    int c=0;
    while (n<=end)
    {
        for(int i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<n<<" ";
        }
        c=0;
        n++;
    }
   return 0;
}
