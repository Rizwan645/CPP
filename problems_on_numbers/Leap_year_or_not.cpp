#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input a year: ";
    cin>>n;
    if (n%400==0)
    {
        cout << "Leap year";
    }
    else if(n%100!=0&&n%4==0)
    {
        cout<<"Leap Year";
    }
    else 
    {
        cout<< "Not a Leap Year";
    }
    return 0;
}
