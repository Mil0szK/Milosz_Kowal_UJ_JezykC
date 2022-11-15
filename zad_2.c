#include <stdio.h>

int main()
{
    int a, b;
    printf("Podaj liczbę a: ");
    scanf("%d", &a);
    printf("Podaj liczbę b: ");
    scanf("%d", &b);
    printf("Wynik dodawania %d+%d wynosi %d\n", a, b, a+b);
    return 0;
}