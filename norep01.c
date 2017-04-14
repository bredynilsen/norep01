/*Programa para Imprimir valores sem repetição*/
/*Bredy Nilsen Orrico Valentim*/
/* Breve descricao:*/
/* Este programa imprime 100 vez numeros aleatórios de entre 1 e 6, sem repetições */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "libredy.h"
/*Declaração de funções*/

void norep(int x, int *iVetor); 
int main()
{
/* Declaração de variáveis*/
    int x=6, y, i;
    int *vetor = (int *)malloc(sizeof(int) * x);
    srand(time(NULL));
/*Laço para as 100 repetiçoes*/
    for (y=1; y<=100; y++)
    {
        printf("%d:", y);
/*Chamada da Função NoREP*/    
        norep(x, vetor);
        printf("\t");
        for (i = 0; i < x; i++)
            printf("%d\t", vetor[i]);
        printf("\n");

    }
return 0;
getchar();
system("pause");
}
