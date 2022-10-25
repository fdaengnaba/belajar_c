/*
* Calculate and display the difference of two input values
*/

#include <stdio.h>
int main(void)
{
    int x, /* first input value */
        y, /* second input value */
        sum; /* sum of inputs */

    scanf("%d%d", &x, &y);
    sum = x + y;
    printf("%d + %d = %d\n", x, y, sum);

    return 0;
}