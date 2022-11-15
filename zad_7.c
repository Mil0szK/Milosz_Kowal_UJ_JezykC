#include <stdio.h>

int main()
{
    int n;
    long int w1 = 0, w2 = 1, w3 = 0;
    printf("Podaj n wyraz ciagu Fibonacciego: ");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Minusowy wyraz ciagu Fibonacciego nie istnieje");
    }
    for(int i=3; i<=n; i++)
    {
        w3=w1+w2;
        w1=w2;
        w2=w3;
    }
    printf("Wybrany wyraz ciągu: %li \n", w3);
    return 0;
}