#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*q;
	*q=*p;
	*p=temp;
}
int main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}