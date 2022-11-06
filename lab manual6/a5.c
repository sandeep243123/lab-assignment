#include<stdio.h>
struct student
{
	char name[20];
	int s1,s2,s3;
	double roll_no;

};
void show(struct student t)
{
	float to=(float)((t.s1+t.s2+t.s3)/3);
	printf("*****************************\n");
	printf("Your detail\n");
	printf("Name: %s\n",t.name);
	printf("Roll no: %0.0lf\n",t.roll_no);
	printf("Hindi: %d\n",t.s1);
	printf("English: %d\n",t.s2);
	printf("Math: %d\n",t.s3);
	printf("Total: %d\n",t.s1+t.s2+t.s3);
	printf("Percentage: %f\n",to);
	if(to>80)
	{
		printf("Devision:I");
	}else if(to>50)
	{
		printf("Devision:II");
	}else if(to>30)
	{
		printf("Devision:III");
	}else
	{
		printf("Devision:Fail");
	}
printf("\n*****************************");
		
}
int main()
{
	struct student s;
		printf("Enter your details\n");
		printf("Name: ");
		scanf("%s",&s.name);
		printf("Roll no: ");
		scanf("%lf",&s.roll_no);
		printf("Hindi: ");
		scanf("%d",&s.s1);
		printf("English: ");
		scanf("%d",&s.s2);
		printf("Math: ");
		scanf("%d",&s.s3);
		show(s);
	return 0;
}