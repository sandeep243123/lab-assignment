#include<stdio.h>
struct Distance
{
    int feet,inch;
    float total;
};
int main()
{
    struct Distance d1,d2,d3;

    printf("Enter first distance\n");
    printf("Feet: ");
    scanf("%d",&d1.feet);
    printf("Inch: ");
    scanf("%d",&d1.inch);
    printf("Enter Second distance\n");
    printf("Feet: ");
    scanf("%d",&d2.feet);
    printf("Inch: ");
    scanf("%d",&d2.inch);
    d3.inch=(d1.inch+d2.inch)%12;
    d3.feet=d3.feet+d1.feet+d2.feet+(d1.inch+d2.inch)/12;
    

    printf("feet: %d inch: %d\n",d1.feet,d1.inch);
    printf("feet: %d inch: %d\n",d2.feet,d2.inch);
    printf("Addition is\n");
    printf("feet: %d inch: %d\n",d3.feet,d3.inch);

    return 0;
}