#include <stdio.h>
#define FARE 1.5

int main(void)
{
    double initial_odometer, final_odometer;
    double distance, fare;

    printf("TAXI FARE CALCULATOR\n");

    /* Get initial_odometer. */
    printf("Enter beginning odometer reading=> ");
    scanf(" %lf", &initial_odometer);

    /* Get final_odometer. */
    printf("Enter ending odometer reading=> ");
    scanf(" %lf", &final_odometer);

    /* Calculate fare. */
    distance = final_odometer - initial_odometer;
    fare = distance * FARE;

    /* Display result/ fare. */
    printf("You traveled a distance of %.1lf miles. At $1.50 per mile, your fare is $%.2lf.\n"
    , distance, fare);

    return 0;
}