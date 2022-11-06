#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the cahracter\n");
	scanf("%c",&ch);
	if(ch<='Z'&&ch>='A')
		printf("Capital Letter");
	else if(ch<='z'&&ch>='a')
		printf("Small Letter");
	else
		printf("Not a character\n");
	return 0;
}