#include<stdio.h>
struct Student
{
    char name[20];
    int age;
    float marks;
};
int main()
{
    struct Student s1[]={{"Raj",33,(float)87.5},{"Mohit",13,(float)23.5},{"Hari",54,(float)67.5},{"Sumit",26,(float)87.5},{"Tanya",25,(float)90.5}};
    
    printf("Before Sorting\n");
    for(int i=0;i<5;i++)
    {
        printf("Name: %s  ",s1[i].name);
        printf("Age: %d  ",s1[i].age);
        printf("Marks: %f  ",s1[i].marks);
        printf("\n");
    }
    struct Student temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            temp=s1[i];
            if(s1[i].name[0]<s1[j].name[0])
            {
                s1[i]=s1[j];
                s1[j]=temp;
            }
            
        }
    }

    printf("After Sorting\n");
    for(int i=0;i<5;i++)
    {
        printf("Name: %s  ",s1[i].name);
        printf("Age: %d  ",s1[i].age);
        printf("Marks: %f  ",s1[i].marks);
        printf("\n");
    }

}