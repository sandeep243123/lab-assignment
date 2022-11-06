#include<stdio.h>
struct Marks                //declaration of structure
{
    int hindi,math,english,sanskrit;
};

int main()
{
    struct Marks m1;
    //Initialization of structure
    m1.hindi=90;
    m1.math=76;
    m1.english=79;
    m1.sanskrit=98;
    printf("HINDI:%d\nENGLISH:%d\nMATH:%d\nSANSKRIT:%d",m1.hindi,m1.english,m1.math,m1.sanskrit);
    return 0;
}