#include <stdio.h>

int main()
{
    int n,key,start,end,mid;
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
    start = 0;
    end = n-1;
    
    while(start<=end)
    {
        mid=(start+end)/2;
        if(key==arr[mid])
        {
            printf("Found at locaion  %d",mid);
            break;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        else
        {
           printf("Element Not Found"); 
        }
    }
    return 0;
}
