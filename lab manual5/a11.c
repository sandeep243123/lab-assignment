#include<stdio.h>
int main()
{
	double temp;
	printf("Enter the temprature\n");
	scanf("%lf",&temp);
	if((temp)>=98.6)
	{
		printf("You are suffering from fever\n");
	}else
	{
		printf("No fever\n");
	}
}