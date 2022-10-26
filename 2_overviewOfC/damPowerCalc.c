#include <stdio.h>
#define GRAVITY 9.80
#define EFICCIENCY 0.9
#define CUBIC_MASS 1000

int main(void)
{
    double height, flow;
    double power_W, power_MW;

    printf("Dam Powe Calculator Program\n");

    /* Get height and flow. */
    scanf(" %lf %lf", &height, &flow);
    printf("Height: %14.2lfm\n", height);
    printf("Flow  : %14.2lfm^3s^(-1)\n", flow);

    /* Calculate power. */
    power_W = (flow * CUBIC_MASS) * GRAVITY * height * EFICCIENCY;
    power_MW = power_W / 1000000;

    /* Display result. */
    printf("\nPower: %14.2lfMW\n", power_MW);

    return 0;
}