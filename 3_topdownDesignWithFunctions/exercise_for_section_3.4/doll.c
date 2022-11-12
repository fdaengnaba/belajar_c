#include <stdio.h>

void print_d(void); /* Print 'D'. */
void print_o(void); /* Print 'O'. */
void print_l(void); /* Print 'L'. */

int main(void)
{
    print_d();
    printf("\n");
    print_o();
    printf("\n");
    print_l();
    printf("\n");
    print_l();
    printf("\n");

    return 0;
}

void print_d(void)
{
    printf("D");
}

void print_o(void)
{
    printf("O");
}

void print_l(void)
{
    printf("L");
}