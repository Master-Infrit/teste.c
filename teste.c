#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("entre com o estoque: \n");
    scanf("%u", &estoque);

    if ( temperatura < 30){
        printf("Temperatura esta alta\n");
    }   
    else {
        printf("Temperatura esta nos parametros\n");
    }

    if (umidade > 50){
        printf("umidade elevada \n");    
    }
        else {
        printf("Umidade esta normal\n");
    }
    
    if (estoque < estoqueMinimo){
        printf("Estoque abaixo do minimo");
    }    
    else {
        printf("Estoque Normal! \n");
    }
}
