/*
 * Determines the value of a collection of coins.
*/
#include <stdio.h>

int main(void)
{
    char first, middle, last; /* input - 3 initials              */
    int pennies, nickels;     /* input - count of each coin type */
    int dimes, quarters;      /* input - count of each coin type */
    int dollars;              /* input - count of each coin type */
    int change;               /* output - change amount          */
    int total_dollars;        /* output - dollar amount          */
    int total_cents;          /* total cents                     */

    /* Get and display the customer's initials. */
    scanf(" %c%c%c, &first, &middle, &last");
    printf("your 3 initials is %c%c%c\n");

    /* Get the count of each kind of coin. */
    scanf(" %d", &dollars);
    printf("Number of $ coins = %d\n", dollars);
    scanf(" %d", &quarters);
    printf("Number of quarters = %d\n", quarters);
    scanf(" %d", &dimes);
    printf("Number of dimes = %d\n", dimes);
    scanf(" %d", nickels);
    printf("Number of nickels = %d\n", nickels);
    scanf(" %d", &pennies);
    printf("Number of pennies = %d\n", pennies);

    /* Compute the total value in cents. */
    
}