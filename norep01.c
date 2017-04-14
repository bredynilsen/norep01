/*Programa para Imprimir valores sem repetição*/
/*Bredy Nilsen Orrico Valentim*/
/* Breve descricao:*/
/* Este programa imprime 100 vez numeros aleatórios de entre 1 e 6, sem repetições */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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

/*Função para preenchimento do vetor e comparação de números iguais*/
void norep(int x, int *iVetor) 
{
    int k, j, iAux, iFlag = 0;

    for (k = 0; k < x; k++) 
    {
        iAux = 1+ rand()%6;
        for (j = 0; j < k; j++) 
        {
            if (iAux == iVetor[j])
                iFlag = 1;
        }
        if (iFlag != 1)
            iVetor[k] = iAux;
        else
            k--;
        iFlag = 0;
    }
}
