#include <stdio.h>

int main (void)
{
    int num, i =0;
    int soma =0;

    printf("Digite um numero:\n ");
    scanf("%d", &num);

    while (num != 0)
    {
        soma = (soma + num);
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    printf ("A Soma dos numeros eh de: %d ",soma);

    return 0;
}
