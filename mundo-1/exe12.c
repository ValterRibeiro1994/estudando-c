#include <stdio.h>
// Faça um algoritmo que leia o preço de um produto e mostre seu novo preço, com 5% de desconto

float obter_preco(){
    float p; 
    printf("Informe o preco do produto: ");
    scanf("%f", &p);
    return p;
    }
    
float calcular_desconto(float preco, int desconto){
    return preco * ( desconto /  100.0);
    }
    
int main(void){
    
    // entrada
    float preco = obter_preco();
    
    // processamento
    float desconto = calcular_desconto(preco, 5);
    float novo_preco = preco - desconto;
    
    // saida
    printf("\nPreco sem desconto: %.2f", preco);
    printf("\nValor do desconto: %.2f", desconto);
    printf("\nNovo Preco: %.2f", novo_preco);
    
    // fim
    return 0;
    }

