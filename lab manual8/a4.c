#include<stdio.h>
#include<math.h>
struct Time
{
    int minutes,hour;
};
int main()
{
    struct Time t1,t2,t3;
    printf("Enter first time\n");
    printf("Hour: ");
    scanf("%d",&t1.hour);
    printf("Seconds: ");
    scanf("%d",&t1.minutes);
    printf("Enter first time\n");
    printf("Hour: ");
    scanf("%d",&t2.hour);
    printf("Seconds: ");
    scanf("%d",&t2.minutes);
    t3.hour=abs(t1.hour-t2.hour);
    t3.minutes=abs(t1.minutes-t2.minutes);
    printf("Hour: %d Minutes: %d\n",t1.hour,t1.minutes);
    printf("Hour: %d Minutes: %d\n",t2.hour,t2.minutes);
    printf("Difference of two times is\n");
    printf("Hour: %d Minutes: %d\n",t3.hour,t3.minutes);

}