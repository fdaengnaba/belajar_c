/*
 * Computes the weight of a batch of flat washer.
 */

#include <stdio.h> /* printf, scanf definitions */
#define PI 3.14159

void instruct(void); /* Show program instruction. */
double find_area(double radius); 
double find_rim_area(double hole_area, double edge_area);
double find_unit_weight(double rim_area, double thickness, double density);

int main(void)
{
    double hole_diameter; /* input - diameter of hole         */
    double edge_diameter; /* input - diameter of outer edge   */
    double thickness;     /* input - thickness of washer      */
    double density;       /* input - density of material used */
    double quantity;      /* input - number of washer made    */
    double weight;        /* output - weight of washer batch  */
    double hole_radius;   /* radius of hole                   */
    double edge_radius;   /* radius of outer edge             */
    double rim_area;      /* area of rim                      */
    double unit_weight;   /* weight of 1 washer               */

    instruct();
    
    /* Get the inner diameter, outer diameter, and thickness. */
    printf("Inner diameter in centimeters> ");
    scanf("%lf", &hole_diameter);
    printf("Outer diameter in centimeters> ");
    scanf("%lf", &edge_diameter);
    printf("Thickness in centimeters> ");
    scanf("%lf", &thickness);

    /* Get the material density and quantity manufactured. */
    printf("Material density in grams per cubic centimeters> ");
    scanf("%lf", &density);
    printf("Quantity in batch> ");
    scanf("%lf", &quantity);

    /* Compute the rim area. */
    hole_radius = hole_diameter / 2.0;
    edge_radius = edge_diameter / 2.0;

    rim_area = find_rim_area(find_area(hole_radius),
               find_area(edge_radius));

    /* Compute the weight of a flat washer. */
    unit_weight = find_unit_weight(rim_area, thickness, density);
    /* Compute the weight of the batch of washers. */
    weight = unit_weight * quantity;

    /* Display the weight of the batch of washers. */
    printf("\nThe expected weight of the batch is %.2f", weight);
    printf(" grams.\n");

    return 0;
}

void instruct(void)
{
    printf("Program that compute the weight of batch of dishwasher\n");
    printf("given diameter of hole,diameter of outer edge, thickness,");
    printf("density and batch quantity");
}

double find_area(double radius)
{
    double area = PI * radius * radius;

    return area;
}

double find_rim_area(double hole_area, double edge_area)
{
    double rim_area = edge_area - hole_area;

    return rim_area;
}

double find_unit_weight(double rim_area, double thickness, double density)
{
    return rim_area * thickness * density;
}