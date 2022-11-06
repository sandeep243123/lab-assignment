#include<stdio.h>
void sum(int *p,int *q)
{
    *p=*p+*q;
}
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    sum(&a,&b);
    printf("sum is: %d",a);  
    return 0; 
}