#include<stdio.h>
struct Company
{
    char name[20];
    char address[50];
    char phone_no[20];
    int number_of_employee;
};
int main()
{
    printf("How many employee data you want to store\n");
    int n;
    scanf("%d",&n);
    struct Company e[n];
    printf("Enter the %d employee details\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Employee-%d\n",i+1);
        printf("Name     :");
        scanf("%s",e[i].name);
        printf("Address  :");
        scanf("%s",e[i].address);
        printf("Phone No :");
        scanf("%s",e[i].phone_no);
        printf("\n");
    }

printf("\n\n");
    printf("Stored Employee Data\n");
    for(int i=0;i<n;i++)
    {
        printf("****Employee%d****\n",i+1);
        printf("Name     %s\n",e[i].name);
        printf("Address: %s\n",e[i].address);
        printf("Phone:   %s\n",e[i].phone_no);
    }
    
}