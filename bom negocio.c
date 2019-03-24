#include <stdio.h>

int main (void)
{
    float real = 0, dolar = 3.17;
    float preco;
    printf("Digite o valor que deseja em DOLAR: ");
    scanf("%f",&real);

    preco = (real * dolar);

    if (preco > 1000)
    {
       printf("Voce ultrapassou a cota. Nao eh bom negocio.");
    }
    else
    {
        printf("/n Eh um bom negocio. Gastou um total de %f", preco);
    }
    return 0;
}
