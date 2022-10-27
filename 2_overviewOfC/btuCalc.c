#include <stdio.h>
#define BTU_GALLON  138095.2381

int main(void)
{
    printf("BTU calculator bprogram\n");

    /* Get efficiency and gallons of oil. */
    int efficiency;
    printf("Enter thermal efficiency in percent)> ");
    scanf(" %d", &efficiency);

    int oil;
    printf("Enter how many gallons of oil> ");
    scanf(" %d", &oil);

    /* Calculate BTU. */
    double btu = (double) oil * BTU_GALLON * efficiency / 100;
     
    /* Display resultl. */
    printf("BTU: %.2lf\n", btu);

    return 0;
}