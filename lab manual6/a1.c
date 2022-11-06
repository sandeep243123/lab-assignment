#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':printf("vowel\n");break;
		case 'e':printf("vowel\n");break;
		case 'i':printf("vowel\n");break;
		case 'o':printf("vowel\n");break;
		case 'u':printf("vowel\n");break;
		default: printf("Not a vowel\n");
	}	
	return 0;
}