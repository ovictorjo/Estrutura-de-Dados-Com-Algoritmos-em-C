#include<stdio.h>

#define TAM 5

int main()
{
    int iIndice, iValorA, iSoma, aVetor[TAM];
    float fMedia;

    for(iIndice = 0; iIndice < TAM; iIndice++)
    {
        printf("Entre com o valor %d: ", iIndice+1);
        scanf("%d",&iValorA);
        aVetor[iIndice] = iValorA;
    }

    iSoma = 0;

    for(iIndice = 0; iIndice < TAM; iIndice++)
    {
        iSoma+=aVetor[iIndice];
    }

    fMedia = (float)iSoma/TAM;

    printf("Media : %0.2f\n",fMedia);

    return 0;
}