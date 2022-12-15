#include<stdio.h>
struct Complex
{
    int img,real;
};
int main()
{
    struct Complex c1,c2,c3;
    printf("Enter first Complex Number\n");
    printf("Real: ");
    scanf("%d",&c1.real);
    printf("Imagenary: ");
    scanf("%d",&c1.img);

    printf("Enter first Second Number\n");
    printf("Real: ");
    scanf("%d",&c2.real);
    printf("Imagenary: ");
    scanf("%d",&c2.img);
    c3.img=c1.img+c2.img;
    c3.real=c1.real+c2.real;
    printf("(%d) + (%d)i\n",c1.real,c1.img);
    printf("(%d) + (%d)i",c2.real,c2.img);
    printf("\nAddition is\n");
    printf("(%d) + (%d)i\n",c3.real,c3.img);
    return 0;
}