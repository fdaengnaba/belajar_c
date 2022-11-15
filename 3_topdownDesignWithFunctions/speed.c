#include <stdio.h>
#define FEET 52800
#define FPS_MPS 0.304692261

double find_fps(double time);
double fps_to_mps(double fps);

int main(void)
{
    int minutes;    /* input - minutes part of time     */
    double seconds; /* input - seconds part of time     */
    double fps;     /* output - speed in feet / seconds */
    double mps;     /* output - speed in meter/ seconds */    
    double times;   /* times in seconds                 */

    /* Get times and minutes*/
    printf("Enter minutes> ");
    scanf("%d", &minutes);
    printf("Enter seconds> ");
    scanf("")
}