#include<stdio.h>
int main()
{
	int math,phy,chem,total;
	printf("Enter the marks \nMaths:");
	scanf("%d",&math);
	printf("Pgysics:");
	scanf("%d",&phy);
	printf("Chemestry:");
	scanf("%d",&chem);
	total=math+phy+chem;
	if(math>=65)
	{
		if(phy>=55)
		{
			if(chem>=50)
			{
				if(total>=180)
				{
					printf("Eligible");
				}
			}else
			{
				printf("Not Eligible");
			}
		}else
			{
				printf("Not Eligible");
			}
	}else
			{
				printf("Not Eligible");
			}
	return 0;
}