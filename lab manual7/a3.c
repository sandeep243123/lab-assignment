#include<stdio.h>
void max(int *a,int *b)
{
	if(*a<*b)
	*a=*b;
}
int main()
{
	int a,b;
	printf("Enter the vlaue of a and b\n");
	scanf("%d %d",&a,&b);
	max(&a,&b);
	printf("Max no is %d",a);
	return 0;
}