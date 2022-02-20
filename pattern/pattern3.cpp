/*
1
11
111
1111
11111
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin >>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}
