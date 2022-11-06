#include<stdio.h>
int power(int n,int i)
{
    if(i==0)
    return 1;
    return n*power(n,i-1);
}
int main()
{
    printf("Enter the number\n");
    int n,i;
    scanf("%d",&n);
    printf("Enter the power\n");
    scanf("%d",&i);
    printf("%d Power of %d is: %d",i,n,power(n,i));
    return 0;
}