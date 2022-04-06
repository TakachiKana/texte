#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Exibir(int *pv, int pTam){
	int i;
	for(i = 0; i < pTam; i++)
	{
		if(1 % 10 == 0)
		{
			printf("\n");
			printf("%5d", pv[i]);
		}
		
	}
}
int main()
{
	int *v;
	int n, i, x;
	bool achou;
	
	srand(time(NULL));
	printf("Digite N:");
	scanf("%d", &n);
	
	v = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		v[i] = rand() % 101;
	}
	printf("Vetor gerado");
	Exibir(v,n);
	
	printf("Digite x:");
	scanf("%d", &x);
	achou = false
	for(i = 0; i < n; i++)
	{
		if(v[i] == x)
			printf(" %d foi encontrado na posicao %d", x, i);
			achou = false
		else
			printf(" %d nao foi encontrado no vetor", x);
	}
	if(!achou)
		printf(" %d nao esta no vetor");
	free(v);
	return 0;
}
