#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the one character\n");
	scanf("%c",&ch);
	if(ch<='Z'&&ch>='A'||ch<='z'&&ch>='a')
	{
		printf("Alphabate");
	}else if(ch<='9'&&ch>='0')
	{
		printf("Digit");
	}else
	{
		printf("Special character");
	}
	return 0;
}