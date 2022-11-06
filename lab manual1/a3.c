#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[100];
    printf("Enter the number\n");
    scanf("%15s",ch);
    printf("     ");
    int i=0;
    while(ch[i]!='\0')
    {
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}