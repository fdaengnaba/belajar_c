#include <stdio.h>

int main(void)
{
    /* Get input. */
    char grade;
    printf("Enter desired grad> ");
    scanf(" %c", &grade);

    double min_avg;
    printf("Enter minimum average required> ");
    scanf(" %lf", &min_avg);

    double curr_avg;
    printf("Enter current average in course> ");
    scanf(" %lf", &curr_avg);

    int crs_percent;
    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf(" %d", &crs_percent);

    /* Calculate final score required. */
    double final_score = (min_avg - (curr_avg * (100 - crs_percent) / 100)) * 100 / crs_percent;

    /* Display result. */
    printf("You need a score of %6.2lf on the final to get a %c.\n", final_score, grade);

    return 0;
}