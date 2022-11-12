/*
* Converts distance in miles to kilometers.
*/

#include <stdio.h>
#define KMS_PER_MILE 1.609

void instruct(void); /* Display instruction to the user. */

int main(void)
{
    double miles, // input - distance in miles.
     kms; // output - distance in kilometers

     instruct(); /* Display instruction to the user. */

     /* Get the distance in miles. */
     printf("%s", "Enter the distance in miles> ");
     scanf("%lf", &miles);

     /* Convert the distance to kilometers. */
     kms = KMS_PER_MILE * miles;

     /* Display the distance in kilometers. */
     printf("That equals %f kilometers.\n", kms);

     return 0;
}

void instruct(void)
{
    printf("This program convert from mile(s) to kilometer(s)\n");
    printf("To use this program, enter the length in mile(s)\n");
    printf("after the prompt: Enter the distance in miles>\n");
}