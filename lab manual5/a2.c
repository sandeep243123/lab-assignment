#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case '-': printf("Minus operator");break;
		case '+': printf("Plus operator");break;
		case '*': printf("Multiply operator");break;
		case '/': printf("Devision operator");break;
		case '%': printf("Modulus operator");break;
		case '>': printf("Grater operator");break;
		case '<': printf("Less operator");break;
		case '=': printf("Assignment operator");break;
		case '&': printf("Bitwise and operator");break;
		case '|': printf("Bitwise or operator");break;
		case '~': printf("Negate operator");break;
		default:
		printf("This is not an operator\n");
	}

	return 0;
}