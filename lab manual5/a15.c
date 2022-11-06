#include<stdio.h>
int main()
{
	int a,p=0,m=0;
	 printf("Enter the five number\n");
	 for(int i=0;i<5;i++)
	 {
	 	scanf("%d",&a);
	 	if(a>0)
	 		p++;
	 	else
	 		m++;
	 }
	 printf("Positive number = %d\n",p);
	 printf("Negative number = %d",m);

}
