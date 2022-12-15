#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("A.txt", "r");

    if (ptr1 == NULL)
    {
        printf("Error");
        exit(0);
    }

    ptr2 = fopen("B.txt", "w");

    if (ptr2 == NULL)
    {
        printf("Error");
        exit(0);
    }

    char str[100];
    char str2[100];

    while (!feof(ptr1))
    {
        fscanf(ptr1, "%*s %s %*s %s", str, str2);
        fprintf(ptr2, "%s,  %s\n",str, str2);
        printf("%s,  %s\n", str, str2);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}