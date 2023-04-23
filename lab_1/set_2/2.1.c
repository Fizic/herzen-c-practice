#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EARTH_ORBIT_RADIUS 150
#define EARTH_ORBITAL_PERIOD 365
#define MARS_ORBIT_RADIUS 228
#define MARS_ORBITAL_PERIOD 687
#define STUDY_TIME_INTERVAL 250755


int main() {
    for(int t = 0; t < STUDY_TIME_INTERVAL; t += 10000){
        double w1 = 2 * M_PI / MARS_ORBITAL_PERIOD, w2 = 2 * M_PI / EARTH_ORBITAL_PERIOD;
        double x = MARS_ORBIT_RADIUS * cos(w1 * t) - EARTH_ORBIT_RADIUS * cos(w2 * t);
        double y = MARS_ORBIT_RADIUS * sin(w1 * t) - EARTH_ORBIT_RADIUS * sin(w2 * t);
        printf("%lf %lf\n", x, y);
    }
    return EXIT_SUCCESS;
}
