#include <stdio.h>
#include <math.h>
int armstrog(int *n)
{
    int on = *n, total = 0, count = 0;
    while (on != 0)
    {
        on = on / 10;
        count++;
    }
    int i = 0;
    on = *n;
    while (on != 0)
    {
        i++;
        total = total + pow((on % 10), count);
        on = on / 10;
    }

    if (total == *n)
        return 1;
    else
        return 0;
}
void armstrong()
{   
    int n = 1;
    int on, total = 0, count = 0;
    while (n < 1001)
    {
        total=0,count=0;
        on=n;
        while (on != 0)
        {
            on = on / 10;
            count++;
        }
        //printf("Hello user\n");
        on = n;
        while (on != 0)
        {            
            total = total + pow((on % 10), count);
            on = on / 10;
        }
        if(total==n)
        printf("%d ",total);
        n++;

    }    
}

int main()
{
    int n, ch;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (armstrog(&n))
        printf("Armstrong number\n");
    else
        printf("Not a Armstrong number\n");
    printf("List of armstrong number between 1 - 1000\n");
    armstrong();

    return 0;
}
