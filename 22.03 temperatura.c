#include <stdio.h>
int temp[50];
int main(int argc, char **argv)
{	
	int i,numero;
	int qtd = 0;
	float media;
	for (i =0;i<5;i++)
	{
		printf("Digite uma temperatura: ");	
		scanf("%d", &numero);
		while (numero > 100 || numero < -100)
		{
			printf("Erro, digite novamente: ");
			scanf("%d",&numero);
		}
		temp[i] = numero;
		media = media + numero;
	}
	media = (media/i);
	printf("A media eh %f: ",media);
	for (i =0;i<5;i++)
	{
		if (temp[i]>media)
		{
			qtd++;
		}
	}
	printf("Qtd %d: ",qtd);

		return 0;
}

