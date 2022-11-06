#include<stdio.h>
void sum(int *a,int *b)
{
	int sum;
	sum=*a+*b;
	printf("%d",sum);
}
int main()
{
	int a,b;
	printf("Enter the number\n");
	scanf("%d %d",&a,&b);
	sum(&a,&b);
	return 0;
}