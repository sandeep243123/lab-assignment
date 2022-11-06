#include<stdio.h>
int pallindrome(int *n)
{
    int i,j=*n,total=0;
    while(j>0)
    {
        total=total*10 +j%10;
        j=j/10;
    }
     if(total==*n)
        return 1;
        else
        return 0;
    
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
   if(pallindrome(&n))
    printf("Pallindrome number\n");
    else
    printf("Not pallindrome number\n");    
    return 0; 
}