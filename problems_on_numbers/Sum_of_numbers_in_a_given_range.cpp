#include <iostream>

using namespace std;

int main()
{
    int l,h,sum=0;
    cout<<"Enter Lower range : ";
    cin >> l;
    cout<< "Enter upper range : ";
    cin >> h;
    for(int i=l;i<=h;i++)
    {
        sum=sum+i;
    }
    cout <<"Sum of "<<l<<" to "<<h <<" = "<<sum;
    return 0;
}
