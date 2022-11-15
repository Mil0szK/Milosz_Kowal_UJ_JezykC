#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    char c;
    for(;;)
    {
        printf("Podaj znak działania('+', '-', '*', '/', '^'(potęgowanie), 'p'(pierwiastkowanie)): \n");
        scanf("%*c%c", &c);
        printf("Podaj liczbę a: ");
        scanf("%f", &a);
        printf("Podaj liczbę b: ");
        scanf("%f", &b);
        if(c=='+')
        {
            printf("%f+%f=%f\n", a, b, a+b);

        }
        else if(c=='-')
        {
            printf("%f-%f=%f\n", a, b, a-b);
        }
        else if(c=='*')
        {
            printf("%f*%f=%f\n", a, b, a*b);
        }
        else if(c=='/')
        {
            printf("%f/%f=%.2f\n", a, b, a/b);
        }
        else if(c=='^')
        {
            printf("%f*%f=%.2f\n", a, b, pow(a, b));
        }
        else if(c=='p')
        {
            printf("%f//%f=%.2f\n", a, b, pow(a, 1.0/b));
        }
        else
        {
            printf("Niepoprawny znak!\n");
        }
        printf("Żeby wyjść wpisz 'E': ");
        scanf("%*c%c", &c);
        if(c=='E')
        {
            break;

        }
        else
        {
            continue;
        }
    }
    return 0;
}