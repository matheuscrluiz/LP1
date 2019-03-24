#include <stdio.h>
int main (void)
{
    int i =1, n, soma =0,mult =0;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        mult = (i * i);
        soma = (soma + mult);
    }
    printf("A soma dos numeros eh: %d", soma);
    return 0;
}

