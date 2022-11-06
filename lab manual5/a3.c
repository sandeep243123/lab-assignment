#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number 1 to 10\n");
	scanf("%d",&n);
	int nu=n;
	switch(n)
	{
		case 0: printf("F");break;
		case 1: printf("E");break;
		case 2: printf("D");break;
		case 3: printf("D+");break; 
		case 4: printf("C");break;
		case 5: printf("C+");break;
		case 6: printf("B");break;
		case 7: printf("B+");break;
		case 8: printf("A-");break;
		case 9: printf("A");break;
		case 10: printf("A+");break;
		default:
		printf("!Error");
	}
	return 0;
}