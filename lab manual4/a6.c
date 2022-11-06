#include<stdio.h>
void check(int n)
{
    if(n%5==0)
    printf("Devisible by 5");
    else if(n%11==0)
    printf("Devisible by 11");
    else
    printf("Not devisible by 5 and 11");
}
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    check(n);
    return 0;
}