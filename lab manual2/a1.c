#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter the string\n");
    gets(s);
    int i=strlen(s);
    printf("The value read is: ");
    for(int j=0;j<i;j++)
    {
        if(s[j]>=48&&s[j]<=57||s[j]==46)
        {
            printf("%c",s[j]);
        }
    }
    return 0;
}