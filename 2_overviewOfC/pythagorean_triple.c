#include <stdio.h>

int main(void)
{
    /* Get m and n. */
    int m, n;
    printf("input m n > ");
    scanf(" %d %d", &m, &n);

    /* Compute side 1, 2 and hypotenuse. */
    int side1 = m * m - n * n;
    int side2 = 2 * m * n;
    int hypotenuse = m * m + n * n;

    /* Display side1, 2, and hypotenuse. */
    printf("side1: %d\nside2: %d\nhypotenuse: %d", side1, side2,
    hypotenuse);

    return 0;
}