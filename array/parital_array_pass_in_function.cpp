#include <stdio.h>
#include <limits.h>
int array(int n,int arr[100])
{
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    printf("Enter those %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
int array_part(int n,int arr[100],int start,int end)
{
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    printf("Enter those %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Start and End: ");
    scanf("%d%d",&start,&end);
    for(int i=start;i<end;i++)
    {
        printf("%d ",arr[i]);
    }

    
}

int main()
{
    int n;
    int arr[100];
    int a,b;
    array_part(n,arr,a,b);
    return 0;
}
