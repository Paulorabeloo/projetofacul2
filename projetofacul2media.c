#include <stdio.h>

int main()
{
   double x, y, media;

    printf("Escreva o primeiro numero: ");
    scanf("%lf", &x);
    printf("Escreva o segundo numero: ");
    scanf("%lf", &y);

    media = (x + y) / 2.0;
    printf("media = %2.lf\n", media);

    return 0;
}
