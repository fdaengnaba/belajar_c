#include <stdio.h>
#include <math.h>

void instruct(void);
int find_depart_time(int arrival, double distance, double speed);

int main(void)
{
    int arrival;
    double distance, speed;

    instruct();
    printf("arrival time> ");
    scanf("%d", &arrival);
    printf("distance> ");
    scanf("%lf", &distance);
    printf("speed> ");
    scanf("%lf", &speed);

    /* Display departure time. */
    printf("Departure time is %d\n", find_depart_time(arrival, distance, speed));

    return 0;
}
/*
 * Compute estimated departure time
 */
int find_depart_time(int arrival, double distance, double speed)
{
    long int time; /* time in minutes */
    /* convert arrival time to minute. */
    time = arrival / 100 * 60 + arrival % 100;

    /* compute time required */
    int time_req = round( distance / speed * 60);

    time -= time_req;

    return time / 60 * 100 + time % 60;
}

void instruct(void)
{
    printf("This prgram test function find_depart_time\n");
}