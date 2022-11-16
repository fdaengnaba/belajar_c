#include <stdio.h>

/* find acceleration given initial velc, final velc, time */
double find_acceleration(double vi, double vf, double t);

int main(void)
{
    double vi;  /* input - initial speed */
    double vf;  /* input - final speed   */
    double t;   /* input - time elapsed  */
    double acc; /* output - acceleration */
    double t0;  /* output - time to stop */

    /* Get initial speed, final speed, time */
    printf("vi vf t> ");
    scanf("%lf%lf%lf", &vi, &vf, t);

    /* Compute acceleration. */
    acc = find_acceleration(vi, vf, t);

    /* Compute time till stop. */
    t0 = vi / acc;

    /* display result */
    printf("acc = %.2lf\ntime to stop = %.2lf\n", acc,t0);

    return 0;
}

/* find acceleration given initial velc, final velc, time */
double find_acceleration(double vi, double vf, double t)
{
    return (vf - vi)/t;
}