#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("Enter the %d element in the array\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("Entered array is: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}