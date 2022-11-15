#include <stdio.h>

int main()
{
    int m, n, c;
    printf("Podaj liczbę m: ");
    scanf("%d", &m);
    printf("Podaj liczbę n: ");
    scanf("%d", &n);
    if(n == 0)
    {
        printf("%d", m);
    }
    while(n != 0)
    {
        c = m % n;
        m = n;
        n = c;
    }

    printf("Największy wspóly dzielnik wynosi: %d\n", m);
    return 0;
}