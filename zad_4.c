#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, delta=(b*b)-4*a*c;

    printf("Podaj liczbę a: ");
    scanf("%d", &a);
    printf("Podaj liczbę b: ");
    scanf("%d", &b);
    printf("Podaj liczbę c: ");
    scanf("%d", &c);
    if(delta>0)
    {
        float x1=(-b-sqrt(delta))/2*a, x2=(-b+sqrt(delta))/2*a;
        printf("Miejsca zerowe funkcji wynoszą: %f, %f\n", x1, x2);

    }
    else if(delta==0)
    {
        float x0=(-b/2*a);
        printf("Miejsce zerowe funkcji wynosi: %f\n", x0);
    }
    else
    {
        printf("Miejsce zerowe funkcji nie istnieje\n");
    }
    return 0;
}