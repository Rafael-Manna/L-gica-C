// Descobrir se um numero e primo
#include <stdio.h>

int main()
{
	int n;
	printf("Numero primo: ");
	scanf("%d",&n);
	int sup = n, cont = 0;
	for (int inf = 1; inf <= sup;)
	{
		if (n % inf == 0)
		{
			cont++;
			if (inf != sup) cont++;
		}
		inf++;
		sup = n / inf;
	}
	if (cont > 2)
	{
		printf("Codigo comum! O numero %d nao e primo.\n", n);
	}
	else
	{
		printf("Codigo secreto! O numero %d e primo.\n", n);
	}
	return 0;
}
