#include<stdio.h>
int main()
{
	int n;
	enum day{sun=0,mon,tue,wed,thu,fri,sat};
	printf("Enter the number\n");
	scanf("%d",&n);
	switch(n)
	{
		case mon:printf("Monday:%d",mon);break;
		case tue:printf("Tuesday:%d",tue);break;
		case wed:printf("Wednesday:%d",wed);break;
		case thu:printf("Thurusday:%d",thu);break;
		case fri:printf("Friday:%d",fri);break;
		case sat:printf("Saturday:%d",sat);break;
		case sun:printf("Sunday:%d",sun);break;
		default: printf("!Error\n");
	}
	return 0;
}