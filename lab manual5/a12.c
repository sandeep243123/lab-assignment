#include<stdio.h>
int max(int a,int b,int c)
{
	return (a>b?a:b)>c?(a>b?a:b):c;
}
int main()
{
	int a,b,c;
	printf("Enter two number\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Gratest number is %d",max(a,b,c));
	return 0;
}