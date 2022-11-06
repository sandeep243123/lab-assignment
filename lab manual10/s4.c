#include<stdio.h>
struct  distance
{
    int feet;
    int inch;
    float sum;
};

int main()
{
    struct distance d;
    printf("Feet: ");
    scanf("%d",&d.feet);
    printf("Inch: ");
    scanf("%d",&d.inch);
    if(d.inch>12)
    {
        d.feet=d.feet+d.inch/12;
        d.inch=d.inch%12;
    }
    printf("Sum: %d feet %d inch",d.feet,d.inch);
    return 0;
}