#include <stdio.h>

int main(void)
{
    int n = 2;

    printf("The value of n is %d.\n", n);

    double side, area;
    side = 5; area = side * side;

    printf("The area of a square whose side length is %f cm is %f square cm.\n"
    , side, area);
}