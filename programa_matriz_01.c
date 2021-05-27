#include<stdio.h>

#define DIMENSAO 2

int main()
{
    int iLinha,iColuna, iDeterminante, iValorA, aMatriz[DIMENSAO][DIMENSAO];

    for(iLinha = 0; iLinha < DIMENSAO; iLinha++)
    {
        for(iColuna = 0; iColuna < DIMENSAO; iColuna++)
        {
            printf("Entre item %d %d: ",iLinha+1,iColuna+1);
            scanf("%d",&iValorA);

            aMatriz[iLinha][iColuna] = iValorA;
        }

    }

    iDeterminante = aMatriz[0][0] * aMatriz[1][1] - aMatriz[0][1] * aMatriz[1][0];

    printf("Determinante: %d\n",iDeterminante);
    
    return 0;
}