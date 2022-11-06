#include<stdio.h>
int main()
{
    printf("Enter the element of 3*3 matrix\n");
    int arr[9];
    for(int i=0;i<9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i+j]);
        }
        printf("\n");
    }
    return 0;
}