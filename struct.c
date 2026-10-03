#include <stdio.h>
#include <math.h>

typedef struct Pontos{
    float x;
    float y;
} Pontos;

typedef struct {
    char nome[20];
    float preco;
    int quantidade;
} Produto;


float distancia(){
    Pontos p1;
    Pontos p2;

    printf("digite y: ");
    scanf("%f", &p1.y);
    printf("digite x: ");
    scanf("%f", &p1.x);
    printf("digite y: ");
    scanf("%f", &p2.y);
    printf("digite x: ");
    scanf("%f", &p2.x);
    printf("%.2f %.2f\n", p1.x, p2.x);

    float d = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    return d;

}
void compras(Produto lista[]){

    for(int i =0; i<5; i++){
        printf("nome:");
        scanf("%19s",&lista[i].nome);
        
        printf("preço:");
        scanf("%f", &lista[i].preco);
        getchar();
        
        printf("quantidade:");
        scanf("%d", &lista[i].quantidade);
        getchar();
    };
    float total = 0.0;

    for(int i = 0; i < 5; i++){
        total += lista[i].quantidade * lista[i].preco;
    };
    printf("%.2f \n", total);


}

void main(){
    //float d = distancia();
    //printf("%.2f", d);
    Produto lista[5];
    compras(lista);




}












