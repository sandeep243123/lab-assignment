#include<stdio.h>
void dec_to_bin(int n)
{
	int total=0,rem,place=1;
	while(n>0)
	{
		int mod=n%2;
		total=total+mod*place;
		place=place*10;
		n=n>>1;
	}
	printf("%d",total);
}
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	dec_to_bin(n);
	return 0;
}