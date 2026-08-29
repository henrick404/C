#include "ola.h"
#include <stdio.h>
#include <stdbool.h>

bool pronto = false;
int guardado = 0;


void ola_mundo() {
    printf("hello word \n");
}
void ex_1() {
    unsigned int positivo = 10;
    long long grande = 8000000000LL;
    char palavra[7] = "string!";
}
void marcar_pronto(){
    pronto = true;
}
void guardar(int var) {
    guardado = var;
}
void numero(){
    int n;
    scanf("%d",&n);
    printf("numero: %d \n",n);
}
void registro(){
    char nome[50];
    fgets(nome ,50 ,stdin);
    printf("Nome: %s \n",nome);
}
void nota(){
    int nota1,nota2,nota3;
    scanf("%d %d %d",&nota1,&nota2,&nota3);
    float media = (nota1 + nota2 + nota3)/3;
    printf("media: %.2f", media);
}

void desconto(){
    float preco;
    scanf("%f", &preco);
    preco *= 0.9;
    printf("novo preço: R$%.2f \n", preco);
}



void main() {
    //ola_mundo();
    ex_1();
    marcar_pronto();
    guardar(10);
    //numero();
    //getchar();// conserta bug
    //registro();
    //getchar();
    //nota();
    desconto();

}