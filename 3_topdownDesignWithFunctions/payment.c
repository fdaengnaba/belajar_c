/*
 * Program that calculate monthly payment, given the purchase price,
 * down payment, annual interest rate, and number of payments
 */
#include <stdio.h>
#include <math.h>

double find_monthly_interest_rate(double annual_rate);
double find_payment(double principal, double i, int n);

int main(void)
{
    double purchase_price;        /* input - purchase price           */
    double down_payment;          /* input - down payment             */
    double annual_interest_rate;  /* input - interest rate for a year */
    int number_of_payment;        /* input - number of payment        */
    double amount_borowwed;       /* output - amount borowwed         */
    double monthly_payment;       /* output - monthly payment         */
    double monthly_interest_rate; /* 1/12 annual interest rate        */

    /* 
     * Get purchase_price, down_payment, annual_interest_rate
     * number_of_payments
     */
    printf("Enter the purchase price> $ ");
    scanf("%lf", &purchase_price);
    printf("Enter the down payment> $ ");
    scanf("%lf", &down_payment);
    printf("Enter annual interest rate in percent> ");
    scanf("%lf", &annual_interest_rate);
    printf("Enter number of payments> ");
    scanf("%d", &number_of_payment);

    /* Compute amount borowwed. */
    amount_borowwed = purchase_price - down_payment;

    /* Compute monthly payment. */
    monthly_payment = find_payment(amount_borowwed,
    find_monthly_interest_rate(annual_interest_rate),
    number_of_payment);

    /* Display amount borowwed and monthly payment. */
    printf("Money borowwed : $ %.2lf\n", amount_borowwed);
    printf("Monthly payment: $ %.2lf", monthly_payment);

    return 0;
}

double find_monthly_interest_rate(double annual_rate)
{
    return annual_rate / 12;
}

double find_payment(double principal, double i, int n)
{
    double payment = i / 100 * principal / (pow(1 + i/100), -n);
    return payment;
}