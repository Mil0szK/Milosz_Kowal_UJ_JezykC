#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int n, i, count = 0, R_MAX = pow(2, 16)-1, R=rand()%65535;
    double x, y, dist, pi;
    printf("Podaj n: ");
    scanf("%d", &n);


    for (i = 0; i < n; ++i)
    {
        R = (75*(R+1) % 65537)-1;

        x = (double)R / (R_MAX+1.0);
        y = (double)R / (R_MAX+1.0);

        dist = (x*x) + (y*y);

        if (dist <= 1)
        {
            count++;
        }

    }
    pi = (double)count/n*4;
    printf("Pi = %g", pi);
    return 0;
}