#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,max=0,del,min;
    printf("How many element you want to enter: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int f=0,ele,find;
    printf("ENter the element which yout want to search");
    scanf("%d",&find);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==find)
        {
            f=i;
            break;
        }
    }
    if(f)
    printf("index %d\n",f);
    else
    printf("No element found!\n");
    printf("Sum %d\n",sum);
    printf("ENter the position of the element which you want to delete\n");
    scanf("%d",&del);
    int t=arr[del-1];
    for(int i=del-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }

    max=min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("\nMax: %d\nMin: %d\n",max,min);
    int temp,k=n-1;
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        k--;
    }
    printf("Reversed array\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}