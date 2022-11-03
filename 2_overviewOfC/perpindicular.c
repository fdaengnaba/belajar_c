#include <stdio.h>
#include <stdlib.h>

typedef struct point_s {
    double x;
    double y;
} point;

int main(void)
{
    /* Prompt for and input the coordinates of the two points. */
    point a, b;
    printf("Input two point\n");
    printf("point A> ");
    scanf(" %lf %lf", &a.x, &a.y);
    printf("point B> ");
    scanf(" %lf %lf", &b.x, &b.y);

    /* Compute the slope of the line between those two points. */
    double slope = (a.y - b.y) / (a.x - b.x);
    printf("slope: %.2lf\n", slope);

    /* 
    * Compute the coordinates of the mindpoint of the line 
    * segment between the two points by averaging the two
    * x-coordinates and y-coordinates.
    */
    point mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    printf("mid point: %.2lf %.2lf\n", mid.x, mid.y);

    /*
    * compute the slope of the perpindicular bisector by taking the
    * negative reciprocal of the slope of the line segment
    */
    double per_slope = -1/slope;
    printf("the slope of the perpendicular line: %.2lf\n", per_slope);

    /* Compute the y-intercept of the perpendicular bisector. */
    point y_intercept;
    y_intercept.x = 0;
    y_intercept.y = mid.y - per_slope * mid.x;
    

    return 0;
}