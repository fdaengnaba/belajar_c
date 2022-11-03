#include <stdio.h>
#define KMH_MS 0.277778

int main(void)
{
    /* Get take off speed and distance. */
    printf("enter takeoff speed in km.h> ");
    int takeoff_spd;
    scanf(" %d", &takeoff_spd);
    printf("enter distance in m> ");
    int distance;
    scanf(" %d", &distance);

    /* Convert km/h to m/s. */
    takeoff_spd *= KMH_MS;

    /* Calculate time. */
    double time = (double) distance * 2 / takeoff_spd;

    /* Calculate acceleration. */
    double acc = takeoff_spd / time;

    /* Display acceleration and time. */
    printf("Acceleration: %.2lf m/s^2\nTime: %.2lf s\n", acc, time);

    return 0;
}