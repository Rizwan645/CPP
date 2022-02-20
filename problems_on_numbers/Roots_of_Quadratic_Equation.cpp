#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    int d;
    float r1,r2;
    double r11,r22;
    cout << "ROOTS OF A QUADRATIC EQUATION"<<endl;
    cout << " General form: ax^2 + bx + c"<<endl;
    cout<<"Enter the value of a : ";
    cin >>a;
    cout<<"Enter the value of b : ";
    cin >>b;
    cout<<"Enter the value of c : ";
    cin >>c;
    d=(b*b)-(4*a*c);
    if(d>=0)
    {
        r1=(((-1)*b)+sqrt(d))/(2*a);
        r2=(((-1)*b)-sqrt(d))/(2*a);
        cout<<"Roots: "<<r1<<" , "<<r2;
    }
    else
    {
        r1=((-1)*b)/(2*a);
        r11= (sqrt(-d))/(2*a);
        r22=(sqrt(-d))/(2*a);
        cout<<"Roots: "<<r1<<" + i"<<r11<<" , "<<r1<<"-i"<<r22;
    }
    
    return 0;
}
