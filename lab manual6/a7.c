#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the side of a triangle\n");
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b&&a==c)
		{
			printf("Equiateral triangle");
		}else if(a==b||a==c||b==c)
		{
			printf("Isoceles triangle\n");
		}else
		{
			printf("Scalene triangle");
		}
	}else
	{
		printf("Not a valid triangle\n");
	}
	return 0;
}