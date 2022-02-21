//n=1+(1+2)+(1+2+3)+...(1+2+3+...+n)

#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    long s=0;
    cout<<"Enter the value n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        arr[i]=(i*(i+1))/2;
    }
    for(int i=1;i<=n;i++)
    {
       cout<<arr[i]<<" ";
       s=s+arr[i];
    }
    cout<<endl<<"SUM = "<<s;
    return 0;
}
