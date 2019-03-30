// Programa 2:

#include <stdio.h>

int main (void)
{
int n1,n2;
int total, i;

printf("Digite o primeiro numero: ");
scanf ("%d", &n1);
printf("Digite o segundo numero: ");
scanf ("%d", &n2);

if (n1 > n2)
{	
	i = n1;
	total = n2;
}
else 
{	
	i = n2;
	total = n1;
}

for(i ; i >= total ; i--)
	{
		if (i % 2 == 0)
			{
				printf("%d - ", i);
			}
	}
	return 0;
}
