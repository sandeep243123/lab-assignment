#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);

}
int main()
{
    int n,originalNumber,total=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    originalNumber=n;
    while(n)
    {
        total=total+fact(n%10);
        n=n/10;
    }
    if(total==originalNumber)
    printf("Krishnamurthy number");
    else
    printf("Not a Krishnamurthy number");
}