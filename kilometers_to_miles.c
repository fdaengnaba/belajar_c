/*
* Converts distance in kilometers to miles
*/

#include <stdio.h>
#define MILE_PER_KMS 0.621371

int main(void)
{
    double kms, // input - distance in kilometers.
     miles; // output - distance in miles.

     /* Get the distance in kilometers. */
     printf("%s", "Enter the distance in kilometers> ");
     scanf("%lf", &kms);

     /* Convert the distance to kilometers. */
     miles = MILE_PER_KMS * kms;

     /* Display the distance in kilometers. */
     printf("That equals %f miles.\n", miles);

     return 0;
}