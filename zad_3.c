#include <stdio.h>

int main()
{
    int a, b;
    printf("Podaj liczbę a: ");
    scanf("%d", &a);
    printf("Podaj liczbę b: ");
    scanf("%d", &b);
    printf("Miejsce zerowe funkcji y=%dx+%d wynosi %d\n", a, b, -b/a);
    return 0;
}