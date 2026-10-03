#include <stdio.h>
#include <stdlib.h>


void preencher(int *referencia, int tamanho){
    for (int i=0; i<tamanho; i++){
        printf("Número %d:", i);
        scanf("%d\n", referencia[i]);

    };



}






void main(){
    int tamanho;
    printf("tamanho da alocação:");
    scanf("%d", &tamanho);
    int *alocacao = calloc(tamanho,sizeof(int));
    preencher(*alocacao, tamanho);
    for (int i=0; i<tamanho; i++){
        printf("Número:%d", alocacao[i]);

    };






}