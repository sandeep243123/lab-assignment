#include<stdio.h>
struct Student
{
    char name[20];
    int age;
    char group[5];
};
int main()
{
    struct Student s1={"Sandeep",22,"O+"};
    struct Student s2={"Abinaas",21,"A+"};
    struct Student s3={"Rahul",23,"A+"};
    struct Student s4={"Sumit",20,"AB+"};
    struct Student s5={"Suraj",19,"O-"};
    printf("Name: %s,Age: %d,Blood Group: %s\n",s1.name,s1.age,s1.group);
    printf("Name: %s,Age: %d,Blood Group: %s\n",s2.name,s2.age,s2.group);
    printf("Name: %s,Age: %d,Blood Group: %s\n",s3.name,s3.age,s3.group);
    printf("Name: %s,Age: %d,Blood Group: %s\n",s4.name,s4.age,s4.group);
    printf("Name: %s,Age: %d,Blood Group: %s\n",s5.name,s5.age,s5.group);

    return 0;
}