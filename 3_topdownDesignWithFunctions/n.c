#include <stdio.h>
#include <math.h>
#define PI  3.14159265

double eq1(int n);
double eq2(int n);

int main(void)
{
    int n;
    double result;
    
    /* get n*/
    printf("Enter n> ");
    scanf("%d", &n);

    /* Calculate n!. */
    result = eq1(n) * sqrt(eq2(n));

    /* Display result. */
    printf("%d! equals approximately %lf\n", n, result);
}

double eq1(int n)
{
    return pow(n, n) * exp(-n);
}

double eq2(int n)
{
    return (2.0 * n + 1/3) * PI;
}