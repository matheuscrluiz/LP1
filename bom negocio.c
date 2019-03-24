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
        printf("Gastou mais que o desejado \n");
        printf("Digite novamente o valor em dolar: \n");
        scanf ("%f", &real);

        preco = (real * dolar);
    }
    else
    {
        printf("/n Eh um bom negocio. Gastou um total de %f", preco);
    }
    return 0;
}
