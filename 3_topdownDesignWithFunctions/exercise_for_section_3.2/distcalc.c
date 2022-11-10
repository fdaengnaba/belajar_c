#include <stdio.h>
#include <math.h>

typedef struct point_s {
    double x;
    double y;
    double z;
} point;

int main(void)
{
    point satu, dua; /* input - point 3-D coordinats         */
    double distance; /* output - distance between two points */

    /* Get two points coordinates. */
    printf("Enter point one> ");
    scanf("%lf %lf %lf", &satu.x, &satu.y, &satu.z);
    printf("Enter point two> ");
    scanf(" %lf %lf %lf", &dua.x, &dua.y, &dua.z);

    /* Compute the distance between two ponts. */
    distance = sqrt(pow(satu.x - dua.x, 2) + pow(satu.y - dua.y, 2)
               + pow(satu.z - dua.z, 2));

    /* Display the result. */
    printf("The distance is %.2f", distance);
    
    return 0;
}