#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
}
int main()
{
    printf("Enter the number\n");
    int n;
    scanf("%d",&n);
    printf("The factorial of %d is: %d",n,fact(n));
    return 0;
}