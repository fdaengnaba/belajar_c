#include <stdio.h>
#define MINUTES 60

int main(void)
{ 
    /* Get VTBI and time*/
    int vtbi, time;
    printf("Volume to be infused (ml) => ");
    scanf(" %d", &vtbi);
    printf("Minutes over which to infuse");
    scanf(" %d", &time);

    /* Calculate rate. */
    int rate = vtbi * 60 / time;

    /* Display result. */
    printf("VTBI: %d ml\nRate: %d ml/hr\n", vtbi, rate);

    return 0;
}