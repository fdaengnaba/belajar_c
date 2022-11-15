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

    /* Compute the total surface area. */
    total_surface_area = find_total_surface_area(base_radius,
    slant_height);

    /* Display the total surface area */
    printf("The total surface area is %.2lf square unit\n",
    total_surface_area);

    return 0;
}