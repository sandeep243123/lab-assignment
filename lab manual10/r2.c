#include<stdio.h>
int fibo(int n,int i,int pre,int next)
{
    
    if(n==1)
    {
    printf("0 ");
    return 0;
    }
    if(n==2)
    {
        printf("0 1 ");
        return 0;
    }
    if(i==n)
    return 0;
    if(pre==0)
    {
        i=2;
        printf("%d %d ",pre,next);   
    }
    int sum=next+pre;
    pre=next;
    printf("%d ",sum);
    next=sum;
    return fibo(n,i+1,pre,next);

}
int main()
{
    int n;
    printf("How many number you want to print\n");
    scanf("%d",&n);
    
    int i=2;
    fibo(n,i,0,1);
    return 0;
}