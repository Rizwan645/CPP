#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    long fact=1;
    int num=n;
    while (num>0)
    {
        fact=fact*(num);
        num--;
    }
    cout <<"fact of "<<n<<" = "<<fact;
    return 0;
}
