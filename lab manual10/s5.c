#include <string.h>
#include<stdio.h>
// declaring structure
struct struct_example
{
    int integer;
    float decimal;
    char name[20];
}; 
  
union union_example
{
    int integer;
    float decimal;
    char name[20];
};
int main()
{
    union union_example u;
    struct struct_example d;
    printf("%d\n",sizeof(u));
    printf("%d\n",sizeof(d));
    printf("ENUM\n");
    enum days{sunday=1,monday,tuesday,wednesday,thrusday,friday,saturday};
    for(int i=sunday;i<=saturday;i++)
    printf("%d\n",i);
    return 0;
}