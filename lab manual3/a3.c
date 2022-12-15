#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("abc.txt", "r");

    if (ptr1 == NULL)
    {
        printf("Error");
        exit(0);
    }

    ptr2 = fopen("def.txt", "w");

    if (ptr2 == NULL)
    {
        printf("Error");
        exit(0);
    }

    char str[500];
    char str2[100];
    char str3[100];
    fprintf(ptr2, "Name   Age    City\n");

    printf("Name   Age     City\n");
    while (!feof(ptr1))
    {
        fscanf(ptr1, "%*s %[^,], %*s %[^,], %*s %s", str, str2, str3);
        fprintf(ptr2, "%s %5s   %s\n",str, str2, str3);
        printf("%s %5s   %s\n", str, str2, str3);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}