#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, rem, sum=0, t, A,B,t1, count=0;
    int num1, num2 ;
    cout << " Input lower Range : ";
    cin >> num1;
    cout << " Input upper Range : ";
    cin >> num2 ;
    cout << " Armstrong numbers  are: " << endl;
    for (n = num1; n <= num2 ; n++) 
    {
        sum=0;
        t = n;
        t1=n;
        while(t1>0)
        {
         B=t1%10;
         count++;
         t1=t1/10;
        }
        while (t>0) 
        {
            rem = t % 10;
            A = pow(rem, count);
            sum = sum + A;
            t = t / 10;
        }
        if (sum ==n)
        {
            cout << n << " " ;
        }
        count =0; 
        
    }
    return 0;
}
