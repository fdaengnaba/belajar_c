/*
 * Compute the sum and average of two numbers.
 */

#include <stdio.h> /* printf, scanf definitions */

int main(void)
{
    double one, two, /* input - numbers to process      */
           sum,      /* output - sum of one and two     */
           average;  /* output p average of one and two */
    
    /* Get two numbers. */
    printf("Input number1 and two> ");
    scanf(" %lf %lf", &one, &two);
    
    /* Compute sum of numbers. */
    sum = one + two;

    /* Compute average of numbers. */
    average = sum / 2;

    /* Display sum and average. */
    printf("The averge is : %.2lf\n", average);

    return 0;
}