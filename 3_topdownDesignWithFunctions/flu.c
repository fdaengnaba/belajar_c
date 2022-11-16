#include <stdio.h>
#include <math.h>

int find_case(int n);

int main(void)
{
    printf("FLU EPIDEMIC PREDICTION ON ELAPSED DAYS SINCE\n");
    printf("FIRST CASE REPORT\n");

    int n;

    for (int i = 0; i < 3; i++) {
        printf("Enter day number>> ");
        scanf("%d", &n);
        
        int num_case = find_case(n);

        printf("by day %d, case = %d\n", n, num_case);
    }

    return 0;
} 

int find_case(int n)
{
    return  40000.0 / (1 + 39999 * exp(-0.24681 * n));
}