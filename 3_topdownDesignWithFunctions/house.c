#include <stdio.h>

void instruct(void);
double find_5yrs_fuel(double fuel_cost);
double find_5yrs_tax(double house, double tax);

int main(void)
{
    double initial_house_cost;
    double annual_fuel_cost;
    double tax_rate;
    double house_cost;
    double fuel_5yrs;
    double tax_5yrs;

    instruct(); /* Display instruction. */

    /* get input. */
    printf("Enter intial house cost> ");
    scanf("%lf", &initial_house_cost);
    printf("Enter annual fuel cost> ");
    scanf("%lf", &annual_fuel_cost);
    printf("Enter tax rate> ");
    scanf("%lf", &tax_rate);

    /* compute hous cost. */
    /* compute 5 years fuel cost. */
    fuel_5yrs = find_5yrs_fuel(annual_fuel_cost);
    /* compute 5 yrs tax. */
    tax_5yrs = find_5yrs_tax(initial_house_cost, tax_rate);
    house_cost = initial_house_cost + fuel_5yrs + tax_5yrs;
    
    /* Display house cost. */
    printf("The house cost is %.2lf\n", house_cost);

    return 0;
}

void instruct(void)
{
    printf("Program to calculate hose cost\n");
}
double find_5yrs_fuel(double fuel_cost)
{
    return fuel_cost * 5;
}
double find_5yrs_tax(double house, double tax)
{
    return house * tax * 5;
}