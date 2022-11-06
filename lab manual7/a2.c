#include<stdio.h>
void sum(int *p,int *q)
{
	*p=*p+*q;
}
int main()
{
	int a,b;
	printf("Enter the vlaue of a and b\n");
	scanf("%d %d",&a,&b);
	sum(&a,&b);
	printf("Sum is %d",a);
	return 0;
}