#include <stdio.h>

int main()
{
    int n;
    long long int w=1;
    printf("Podaj n silnia: ");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Minusowa silnia nie istnieje");
    }
    for(int i=n; i>1; i--)
    {
        w *= i;
    }
    printf("Silnia wynosi: %lli \n", w);
    return 0;
}