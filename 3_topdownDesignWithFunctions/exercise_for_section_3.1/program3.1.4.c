/*
 * Computes the weight of a batch of flat washers.
 */

#include <stdio.h> /* printf, scanf, definitions */
#define PI 3.14159

int main(void)
{
    double hole_diameter; /* input - diameter of hole         */
    double edge_diameter; /* input - diamater of outer edge   */
    double thickness;     /* input - thickness of washer      */
    double density;       /* input - density of material used */
    double quantity;      /* input - number of washers made   */
    double weight;        /* output - weight of washer batch  */
    double hole_radius;   /* radius of hole                   */
    double edge_radius;   /* radius of outer edge             */
    double rim_area;      /* area of rim                      */
    double unit_weight;   /* weight of 1 washer               */
    double material_area; /* area of material needed          */
    double leftover;      /* the weight of leftover material  */

    /* Get the inner diameter, outer diameter, and thickness. */
    printf("Inner diameter in centimiters> ");
    scanf(" %lf", &hole_diameter);
    printf("Outer diameter in centimeters> ");
    scanf(" %lf", &edge_diameter);
    printf("Thickness in centimeters> ");
    scanf(" %lf", &thickness);

    /* Get the material density and quantity manufactured. */
    printf("Material density in grams per cubic centimeter> ");
    scanf(" %lf", &density);
    printf("Quantity in batch> ");
    scanf(" %lf", &quantity);

    /* Compute the rim area. */
    hole_radius = hole_diameter / 2.0;
    edge_radius = edge_diameter / 2.0;
    rim_area = PI * edge_radius * edge_radius -
               PI * hole_radius * hole_radius;
    
    /* Compute the weight of flat washer. */
    unit_weight = rim_area * thickness * density;

    /* Compute the weight of the batch of washers. */
    weight = unit_weight * quantity;

    /* Compute the square of centimeters of material needed. */
    material_area = edge_diameter * edge_diameter;

    /* Compute the weight of the leftover material. */
    leftover = (material_area - rim_area) * thickness * density;

    /* Display the weight of the batch of wasers. */
    printf("\nThe expected weight of the batch is %.2f grams\n", weight);

    /* Display the material needed in cubic and the weight of material. */
    printf("The area of material needed is %.2f\n", material_area);
    printf("The weight of leftover material will be %.2f\n", leftover);

    return 0;
}