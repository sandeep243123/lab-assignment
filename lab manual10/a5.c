#include<stdio.h>
#include<stdio.h>
int main()
{
    printf("Enter the element of 3*3 matrix\n");
    int arr1[3][3],arr2[3][3],mul[3][3];
    printf("Enter first array element\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second array element\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("First Array element\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second Array elemnt\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    int t;
    printf("Matrix multipllication is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            t=0;
            for(int k=0;k<3;k++)
            {
                t=t+arr1[i][k]*arr2[k][j];
            }
            mul[i][j]=t;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

}