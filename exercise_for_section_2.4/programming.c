/*
* Store value 'x' and 76.1 in separate memory cells.
* and display them again
*/

#include <stdio.h>

int main(void)
{
    int x; /* first value x */
    double y = 76.1; /* second value y */

    /* prompt user to input a value */
    printf("enter a value>");
    scanf("\n%d", &x);

    /* display again the two value */
    printf("first value = %d second = %f\n", x, y);

    return 0;
}