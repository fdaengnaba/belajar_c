#include <stdio.h>

int main(void)
{
    /* Get population. */
    long int population;
    printf("Enter the population> ");
    scanf(" %ld", &population);

    /* Calculate water save. */
    long int toilets = population / 3.0 + 0.9;
    long int water_saved = toilets * 13 * 14;
    long int cost = toilets * 150;

    /* Display result. */
    printf("Water will be saved : %ld l/day\n", water_saved);
    printf("Cost: $%ld\n", cost);

    return 0;
}