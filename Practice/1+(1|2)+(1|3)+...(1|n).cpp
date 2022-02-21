//s=1+(1/2)+(1/3)+...(1/n)

#include <iostream>
using namespace std;
int main()
{
    float arr[100];
    int n;
    double s=0;
    cout<<"Enter the value n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        arr[i]=(1.0/i);
    }
    for(int i=1;i<=n;i++)
    {
       cout<<arr[i]<<" ";
       s=s+arr[i];
    }
    cout<<endl<<"SUM = "<<s;
    return 0;
}
