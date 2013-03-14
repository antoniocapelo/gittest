#include <stdio.h>
#include <stdlib.h>


// Importação de Módulos
#include "mod_dados.h"


void imprimeArrayAnos(ArrayAnos a)
{
	int i,j,tot;
	i = j = tot = 0;
	for (i = 0; i< N_ANOS; i++)
	{
		if(a[i] == NULL)
		{
			// printf("É nullo!\n");			
		}
		else
			{
				printf("Elemento %d não é nulo!!\n",i+1900);
				printf("Ano: %d\n",(a[i])->ano);
				printf("Nº artigos: %d\n",(a[i])->tot_artigos);
				tot = (a[i])->max_aut;
				printf("maximo de artigos está a %d\n",tot );
				for(j=0;j < tot ;j++)
				{
					printf("Nº de Co-autores: %d -> %d artigos\n", j+1, ((a[i])->autores)[j]);
				}
			}
	}
}


int main()
{
	ArrayAnos estrutura;
	initAnos(&estrutura);
	imprimeArrayAnos(estrutura);
	insertAno(&estrutura, 1950, 3); // inserir num ano
	insertAno(&estrutura, 1951, 5); // inserir num ano
	insertAno(&estrutura, 1951, 5); // inserir no mesmo ano, mesmo #de coautores
	insertAno(&estrutura, 1951, 1); // inserir no mesmo ano,!= #de coautores

	// // imprime(estrutura);
	// {
	// 	int i,j,tot;
	// 	i = j = tot = 0;
	// 	for (i = 0; i< N_ANOS; i++)
	// 	{
	// 		if(estrutura[i] == NULL)
	// 		{
	// 			// printf("É nullo!\n");			
	// 		}
	// 		else
	// 			{
	// 				printf("Elemento %d não é nulo!!\n",i+1900);
	// 				printf("Ano: %d\n",(estrutura[i])->ano);
	// 				printf("Nº artigos: %d\n",(estrutura[i])->tot_artigos);
	// 				tot = (estrutura[i])->max_aut;
	// 				printf("maximo de artigos está a %d\n",tot );
	// 				for(j=0;j < tot ;j++)
	// 				{
	// 					printf("Nº de Co-autores: %d -> %d artigos\n", j+1, ((estrutura[i])->autores)[j]);
	// 				}
	// 			}
	// 	}
	// }

	insertAno(&estrutura, 1951, 10); // inserir no mesmo ano, mesmo #de coautores

	insertAno(&estrutura, 1900, 2); // inserir no 1º ano

	insertAno(&estrutura, 2015, 24); // inserir num ano futuro

	imprimeArrayAnos(estrutura);
	freeAnos(&estrutura);

	return 0;

}