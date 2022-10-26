/* Program to estimate the temperatrue of a freezer 
*  in the case of power failure given time elapsed
*/
#include <stdio.h>

int main(void)
{
    /* Get time elapsed. */
    int hours, minutes;
    printf("Time elapsed since power failure>");
    scanf(" %d %d", &hours, &minutes);

    /* Convert elapsed time to hour. */
    double time = (hours * 60 + minutes) / 60;

    /* Calculate temperature. */
    double temp = ((4 * time * time) / time + 2) - 20;

    /* Display result. */
    printf("The eta temp : %.1lfC degree\n", temp);   
    return 0;
}