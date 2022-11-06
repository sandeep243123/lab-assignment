#include<stdio.h>
int sumOfdigit(int n)
{
    if(n==0)
    return 0;
    return n%10 + sumOfdigit(n/10);
}
int main()
{
    printf("Enter the number\n");
    int n;
    scanf("%d",&n);
    printf("Sum of digit: %d",sumOfdigit(n));

    return 0;
}