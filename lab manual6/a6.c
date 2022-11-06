#include<stdio.h>
int main()
{
	float temp;
	printf("Enter the temprature in centigrade\n");
	scanf("%f",&temp);
	if(temp<0)
	printf("Freezing weather");
	else if(temp<10)
	printf("Very cold weather");
	else if(temp<20)
		printf("Normal in temprature");
	else if(temp<40)
	printf("Its hot");
	else if(temp>=40)
		printf("Very hot");
	return 0;
}