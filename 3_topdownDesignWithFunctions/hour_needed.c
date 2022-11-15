#include <stdio.h>

double find_income_gap(double monthly_install, double monthly_payment);
double find_hour_needed(double income_gap, double hourly_rate);

int main(void)
{
    double monthly_payment; /* input - monthly income from project */
    double hourly_rate;     /* input - hourly income rate* parttime*/
    double monthly_install; /* input - monthly install must paid   */
    double work_hours;      /* output - hours of woek needed       */
    double install_gap;     /* gap between install and project mny */
    
    /* Get monthly_payment, horly_rate, monthly_install. */
    printf("Enter monthly payment> ");
    scanf("%lf", &monthly_payment);
    printf("Enter hourly rate> ");
    scanf("%lf", &hourly_rate);
    printf("Enter monthly installment> ");
    scanf("%lf", &monthly_install);
    
    return 0;
}