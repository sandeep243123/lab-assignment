#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping\n%d %d\n",a,b);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping\n%d %d\n",a,b);
    swap(a,b);
    return 0;
}