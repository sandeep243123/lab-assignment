#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=n-1;
    for(int i=0;i<n/2;i++)
    {
        int t=arr[i];
        arr[i]=arr[k];
        arr[k]=t;
        k--;
    }
    printf("Reveresed Array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}