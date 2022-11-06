#include<stdio.h>
int main()
{
	int ch='A';
	for(int i=1;i<=4;i++)
	{
		for(int k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(int j=0;j<i;j++)
		{
				printf("%c",ch+j);
		}
		for(int l=1;l<i;l++)
		{
			printf("%c",ch+i-l-1);
		}
		printf("\n");
	}
	return 0;
}