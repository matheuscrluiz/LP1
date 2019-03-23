#include <stdio.h>
char temp[50];
int main(int argc, char **argv)
{	
	int i;
	int qtd = 0;
	float media;
	for (i =0;i<5;i++)
	{
		printf("Digite uma temperatura: ");	
		scanf("%hhd", &temp[i]);
		while (temp[i] > 100 || temp[i] < -100)
		{
			printf("Erro, digite novamente: ");
			scanf("%hhd",&temp[i]);
		}
		media = media + temp[i];
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

