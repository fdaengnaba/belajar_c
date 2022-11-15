#include <stdio.h>

void instruct(void);
double find_fuel_cost(double ann_fuel_cost);
double find_tax(double tax_rate);
double find_5yrs_fuel(double fuel_cost);
double find_5yrs_tax(double house, double tax);

int main(void)
{
    double initial_house_cost;
    double annual_fuel_cost;
    double tax_rate;
    double house_cost;

    instruct(); /* Display instruction. */

    /* get input. */
    printf("Enter intial house cost> ");
    scanf("%lf", &initial_house_cost);
    printf("Enter annual fuel cost> ");
    scanf("%lf", &annual_fuel_cost);
    printf("Enter tax rate> ");
    scanf("%lf", &tax_rate);

    
    return 0;
}