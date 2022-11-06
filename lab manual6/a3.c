#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of x and y\n");
	scanf("%d %d",&x,&y);
	if(x>=0&&y>=0)
		printf("I Quadrant");
	else if(x<0&&y>0)
		printf("II Quadrant");
	else if(x<0&&y<0)
		printf("III Quadrant");
	else
		printf("IV Quadrant");
	return 0;
}