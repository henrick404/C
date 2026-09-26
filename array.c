#include <stdio.h>

void soma(){
    int numeros[] = {1,2,3,4,5};
    int quantidade = sizeof(numeros)/sizeof(numeros[0]);
    int soma = 0;
    for(int i = 0; i < quantidade; i++){
        soma += numeros[i];
    }
    printf("%d \n", soma);

}

void acha_a(){
    char palavra[]="banana";
    int quantidade = sizeof(palavra)/sizeof(palavra[0]);
    int soma = 0;
    for(int i = 0; i < quantidade; i++){
        if (palavra[i] == 'a'){
            soma+=1;
        };
    }
    printf("%d \n", soma);
}
void ponteiro(){
    int pontuacao = 100;
    int *ponto = &pontuacao;
    *ponto-= 10;
    printf("%d \n", *ponto);

}

void troca(int *numA, int *numB){
    int numC = *numA;
    *numA = *numB;
    *numB = numC;


}


void main(){
    int a = 6;
    int b = 8;
    troca(&a,&b);
    printf("%d, %d", a,b);
   
}