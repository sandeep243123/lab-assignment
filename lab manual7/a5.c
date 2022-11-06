#include<stdio.h>
int fact(int *n)
{
	int fact =1;
	while(*n!=0)
	{
		fact=fact*(*n);
		(*n)--;
	}
	return fact;
}

int main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("%d",fact(&n));
	return 0;
}