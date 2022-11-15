# Review Questions

1. Top-down design is a program design method, that define problem in a general way, and then refine it until it fine enough to translate to actual code statment. structure chart is a chart to show relations between its subordinates and subproblem.
2. Its a stament that show the result type and list of formal parameter of a function before its defined and main function.
3. a function is executed when its called in the main function. a function prototype should be before the main function and after preprocessor directive. and function definition should be after main function.
4. made main function simpler, more readable, it can be reuse.
5. its make use more efficient programmers time. because function can be called multiple time, and it help programmer flow with top-down design rather than built program as a whole unit in a time.
6. program

```c
#include <stdio.h>
#define PI 3.14

/*
 * prompt user to input radius and 
 * calculate the area of a circle with that radius
 */
int main(void)
{
    double radius; /* input - radius of the circle */
    double area;   /* output - area of the circle  */

    printf("Input radius> ");
    scanf("%lf", &radius);

    /* Compute circle area. */
    area = PI * pow(radius, 2);

    /* Display the area. */
    printf("The are of the circle with the given radius\n");
    printf("is %.2lf\n", area);

    return 0;
}
```
