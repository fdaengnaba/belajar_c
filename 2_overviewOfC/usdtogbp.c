#include <stdio.h>
#define CHANGE_RATE 0.65

int main(void)
{
    double usd, gbp;

    /* Get usd. */
    printf("USD> ");
    scanf("%lf", &usd);

    /* Convert to GBP. */
    gbp = usd * CHANGE_RATE;

    /* Display result. */
    printf("%.2lfGBP\n", gbp);

    return 0;
}