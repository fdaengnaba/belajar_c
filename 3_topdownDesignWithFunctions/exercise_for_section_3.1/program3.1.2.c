/*
 * Computes an employee's gross salary given
 * the hours worked and the hourly rate
 */
#include <stdio.h>

int main(void)
{
    int hours;  /* input - hours worked  */
    int rate;   /* input - rate          */
    int salary; /* output - gross salary */

    /* Get hours worked. */
    printf("Hours worked> ");
    scanf(" %d", &hours);

    /* Get hourly rate. */
    printf("The hourly rate> ");
    scanf(" %d", &rate);

    /* Compute gross salary. */
    salary = hours * rate;

    /* Display the gross salary. */
    printf("The gross salary: %d\n", salary);

    return 0;
}