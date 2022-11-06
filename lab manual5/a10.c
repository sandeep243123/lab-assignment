#include<stdio.h>
int main()
{
	int angle;
	printf("Enter the agnle between the line\n");
	scanf("%d",&angle);
	if(angle==90)
		printf("Perpendicular lines\n");
	else if(angle==0)
		printf("Parallel lines");
	else 
		printf("Intersecting lines");
}