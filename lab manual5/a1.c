#include<stdio.h>
int main()
{
	int m,d,y,days=0;
	printf("Enter the date in DD/MM/YY\n");
	scanf("%d %d %d",&d,&m,&y);
		switch(m-1)
		{
			case 12: days=days+31;
			case 11: days=days+30;
			case 10: days=days+31;
			case 9: days=days+30;
			case 8: days=days+31;
			case 7: days=days+31;
			case 6: days=days+30;
			case 5: days=days+31;
			case 4: days=days+30;
			case 3: days=days+31;
			case 2: if(y%4==0){days=days+29;}else{days=days+28;}
			case 1: days=days+31;
		}
	days=days+d;
	printf("Total days = %d",days);
	return 0;
}