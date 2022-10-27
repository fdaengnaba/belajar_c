#include <stdio.h>

int main(void)
{
    /* Get length and width of yard and house. */
    int yard_length, yard_width;
    printf("Enter yard length> ");
    scanf(" %d", &yard_length);
    printf("Enter yard width> ");
    scanf(" %d", &yard_width);

    int house_length, house_width;
    printf("Enter house length> ");
    scanf(" %d", &house_length);
    printf("Enter house width> ");
    scanf(" %d", &house_width);

    /* Calculate time required to cut grass. */
    long int area = (yard_length * yard_width) - (house_length * house_width);
    long int time = area / 2;

    /* Display result. */
    printf("Time required is %ld second(s)\n", time);
}