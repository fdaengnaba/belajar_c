# include <stdio.h>

void instruct(void); /* Display instruction. */
/* 
 * Calculate total surface area of a cone
 * given its base radius and slant height
 */
double find_total_surface_area(double r, double s);

int main(void)
{
    double base_radius;        /* input - base radius of the cone  */
    double slant_height;       /* input - slant heigth of the cone */
    double total_surface_area; /* output - tot surf area of cone   */

    /* Display instruction. */
    instruct();
    
    /* Get base radius, and slant height. */
    printf("Enter radius of the base> ");
    scanf("%lf", &base_radius);
    print("Enter slant height of the cone> ");
    scanf("%lf", &slant_height);
}