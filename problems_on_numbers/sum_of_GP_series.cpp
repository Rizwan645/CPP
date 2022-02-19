#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,r;
    int n ;
    double sum;
    cout<<"First term: ";
    cin >> a;
    cout<<"No of terms: ";
    cin >> n;
    cout<<"Common ratio: ";
    cin >> r;
    sum = a*(pow(r,n)-1)/(r-1);
    cout << "sum= "<<sum;
    return 0;
}
