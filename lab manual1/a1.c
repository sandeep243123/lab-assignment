#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    int i;
    char ch;
    double d;
    long double ld;
    unsigned int ui;
    printf("1.String: ");
    gets(s);
    printf("2.Integer: ");
    scanf("%d",&i);
    printf("3.Character: ");
    scanf(" %c",&ch);
    printf("4.Real value: ");
    scanf("%lf",&d);
    printf("5.Double(Large real): ");
    scanf(" %Lf",&ld);
    printf("2.Unsigned int: ");
    scanf("%u",&ui);

    printf("\n\nEntered data is\n");
    printf("1.String: ");
    puts(s);
    printf("2.Integer: %d\n",i);  
    printf("3.Character: %c\n",ch);
    printf("4.Real value: %.2lf\n",d);
    printf("5.Double(Large real: %.2Lf\n",ld);
    printf("2.Unsigned int: %u\n",ui);
    printf("\tNumber system\n");
    printf("Enter the integer ");
    int in;
    scanf("%d",&in);
    printf("Integer to Octal: %o\n",in);
    printf("Integer to Hexadecimal: %x",in);
    return 0;
}