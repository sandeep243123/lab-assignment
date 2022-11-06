#include<stdio.h>
int main()
{
	int a[]={23,45,12,21,56,65};
	int *ptr;
	ptr=a;
	int temp;
	for(int i=0;i<6;i++)
	{
		
		for(int j=0;j<6;j++)
		{
			temp=*(ptr+i);
			if(*(ptr+j)>temp)
			{
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}	
	for(int i=0;i<6;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}