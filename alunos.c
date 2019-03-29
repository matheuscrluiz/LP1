// Programa 3:

#include <stdio.h>

int main (void)
{
char turma[50];
char notas[50];
int qtd,i, alunos = 50, nota;
float media, soma;
qtd = 0;
media = 0;
soma = 0;

for(i=0;i<alunos;i++)
{
	printf("Digite a nota do aluno numero %d: \n", i);
	scanf("%d", &nota);
	
	notas[i] = nota;
	soma = (soma + notas[i]); 
}
media = (soma / i);

for(i=0;i<alunos;i++)
{
	if(notas[i] > media)
		{
			qtd ++;	
		}
}

printf("A media total da turma foi de: %2.2f\n", media);
printf("A quantidade de alunos a cima da média foi de: %d", qtd);
	return 0;
}
