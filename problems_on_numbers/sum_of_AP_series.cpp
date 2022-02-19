#include <iostream>

using namespace std;

int main()
{
    float a,d,n;
    cout<<"First term: ";
    cin >> a;
    cout<<"No of terms: ";
    cin >> n;
    cout<<"Common difference: ";
    cin >> d;
    int sum=((n/2)*((2*a)+((n-1)*d)));
    cout << "sum= "<<sum;
    return 0;
}
