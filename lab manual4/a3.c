#include<stdio.h>
void check(char ch)
{
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    printf("Alphabate");
    else if(ch>='0'&&ch<='9')
    printf("Digit");
    else
    printf("Special character");
}
int main()
{
    char ch;
    printf("Press any key\n");
    scanf("%c",&ch);
    check(ch);
    return 0;
}