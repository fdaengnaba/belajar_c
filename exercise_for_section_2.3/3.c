#include <stdio.h>
#define PI 3.14159

int main(void)
{
    double rad, area;

    printf("Area>");
    scanf("%lf", &rad);

    area = PI * rad * rad;
    printf("The area of circle whose radius is %f cm is %f square cm."
    , rad, area);
}