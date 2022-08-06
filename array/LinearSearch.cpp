#include <stdio.h>

int main()
{
    int n,key,pos,k=0;
    int arr[100];
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    printf("Enter those %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element that you want to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            k++;
            pos=i+1;
            break;
        }
    }
    if(k==0)
    {
        printf("Element Not Found");
    }
    else
    {
        printf("Elment Found at Location %d",pos);
    }
    return 0;
}
